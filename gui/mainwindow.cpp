/**
 * @brief The main window class that allows the interface to run and function. 
 * Consists of the UI layout, as well as functionality for deposits, transfers, history etc..
 * @file mainwindow.cpp
 * @authors Mustafa, Jimmy, Abdul-Wali, Bilal, Hassan 
 */
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <sstream>

/**
 * @brief constructor for the main window
 * Connects the buttons to their repsective functions, sets up the UI and initial values
 * @authors Mustafa, Jimmy, Hassan, Bilal, Abdul-Wali
 * @param parent Qwidget for the main window
 */
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , savings("savings", 10.0)
    , checking("checking", 5.0)
{
    ui->setupUi(this);

    // Connect buttons to slots
    connect(ui->loginButton, &QPushButton::clicked, this, &MainWindow::on_loginButton_clicked);
    connect(ui->registerButton, &QPushButton::clicked, this, &MainWindow::on_registerButton_clicked);
    connect(ui->showRegistrationButton, &QPushButton::clicked, this, &MainWindow::showRegistrationForm);
    connect(ui->showLoginButton, &QPushButton::clicked, this, &MainWindow::showLoginForm);
    connect(ui->logoutButton, &QPushButton::clicked, this, &MainWindow::showLoginForm);

    // Connect account buttons
    connect(ui->checkingDepositBtn, &QPushButton::clicked, this, &MainWindow::onCheckingDeposit);
    connect(ui->checkingWithdrawBtn, &QPushButton::clicked, this, &MainWindow::onCheckingWithdraw);
    connect(ui->savingsDepositBtn, &QPushButton::clicked, this, &MainWindow::onSavingsDeposit);
    connect(ui->savingsWithdrawBtn, &QPushButton::clicked, this, &MainWindow::onSavingsWithdraw);
    connect(ui->sourceDrop, &QComboBox::currentTextChanged, this, &MainWindow::updateTransferBalanceDisplay);
    connect(ui->viewHistoryButton, &QPushButton::clicked, this, &MainWindow::on_viewHistoryButton_clicked);
    connect(ui->backToAccountBtn, &QPushButton::clicked, this, &MainWindow::onBackToAccountClicked);

    // budget buttons
    connect(ui->budgetButton, &QPushButton::clicked, this, &MainWindow::showBudgetScreen);
    connect(ui->calculateBudget, &QPushButton::clicked, this, &MainWindow::on_calculateBudget_clicked);
    connect(ui->saveBudget, &QPushButton::clicked, this, &MainWindow::on_saveBudget_clicked);
    connect(ui->addCustomCategory, &QPushButton::clicked, this, &MainWindow::on_addCustomCategory_clicked);
    connect(ui->backToAccountButton, &QPushButton::clicked, this, &MainWindow::onBackToAccountClicked);
    connect(ui->destDrop, &QComboBox::currentTextChanged, this, &MainWindow::updateTransferBalanceDisplay);

    // Add the "Checking Balance Inquiry" button below the Deposit button
    QPushButton* checkingBalanceInquiryBtn = new QPushButton("Balance Inquiry", this);
    connect(checkingBalanceInquiryBtn, &QPushButton::clicked, this, &MainWindow::onCheckingInquiryClicked);

    // Add the button to the checkingGroup layout
    QGridLayout* checkingLayout = qobject_cast<QGridLayout*>(ui->checkingGroup->layout());
    if (checkingLayout) {
        checkingLayout->addWidget(checkingBalanceInquiryBtn, 3, 0, 1, 2); // Add to row 3, spanning 2 columns
    }

    // Add the "Savings Balance Inquiry" button below the Deposit button in the savings group
    QPushButton* savingsBalanceInquiryBtn = new QPushButton("Balance Inquiry", this);
    connect(savingsBalanceInquiryBtn, &QPushButton::clicked, this, &MainWindow::onSavingsInquiryClicked);

    QGridLayout* savingsLayout = qobject_cast<QGridLayout*>(ui->savingsGroup->layout());
    if (savingsLayout) {
        savingsLayout->addWidget(savingsBalanceInquiryBtn, 3, 0, 1, 2); // Add to row 3, spanning 2 columns
    }

    
    //updateBalanceDisplays();

    // Start with the login form visible
    ui->stackedWidget->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/**
 * @brief handles what to do when depositing to checking
 * Gets the current users data and uses the perform transaction function
 * @author Mustafa Kanpurwala
 */
void MainWindow::onCheckingDeposit() {
    auto& userData = loginSystem.getUserData(currentUser);
    performTransaction(userData.checkingAccount, ui->checkingAmountInput, true);
}

/**
 * @author Mustafa Kanpurwala
 * @brief handles what to do when withdrawing from checking
 * Gets the current users data and uses the perform transaction function
 */
void MainWindow::onCheckingWithdraw() {
    auto& userData = loginSystem.getUserData(currentUser);
    performTransaction(userData.checkingAccount, ui->checkingAmountInput, false);
}

/**
 * @author Mustafa Kanpurwala
 * @brief handles what to do when depositing to savings
 * Gets the current users data and uses the perform transaction function
 */
void MainWindow::onSavingsDeposit() {
    auto& userData = loginSystem.getUserData(currentUser);
    performTransaction(userData.savingsAccount, ui->savingsAmountInput, true);
}

/**
 * @author Mustafa 
 * @brief handles what to do when withdrawing from savings
 * Gets the current users data and uses the perform transaction function
 */
void MainWindow::onSavingsWithdraw() {
    auto& userData = loginSystem.getUserData(currentUser);
    performTransaction(userData.savingsAccount, ui->savingsAmountInput, false);
}

void MainWindow::on_viewHistoryButton_clicked() {
    populateTransactionTable();
    ui->stackedWidget->setCurrentIndex(ui->stackedWidget->indexOf(ui->transactionHistoryPage));
}

void MainWindow::on_backToAccountButton_clicked() {
    // Switch to the account page
    ui->stackedWidget->setCurrentIndex(ui->stackedWidget->indexOf(ui->accountPage));
    updateBalanceDisplays(); // Refresh balances if needed
}

/**
 * @authors Mustafa, Bilal, Abdul-Wali
 * @brief handles transactions, for both withdrawls and deposits
 * Handles cases when a negative value is inputed for deposits, and also when more money
 * than is in the account is withdrawn. Also records the transaction for transaction history
 * @param account Account that the transaction is being performed on
 * @param inputField The value the user inputs
 * @param isDeposit Determines whether the transaction is a deposit or withdrawl
 */
void MainWindow::performTransaction(Account& account, QLineEdit* inputField, bool isDeposit) {
    bool ok;
    double amount = inputField->text().toDouble(&ok);

    //Ensures a positive value is input
    if (!ok || amount <= 0) {
        QMessageBox::warning(this, "Invalid Input", "Please enter a valid positive amount");
        return;
    }

    // Ensures there is enough money for the withdrawl amount
    if (!isDeposit) {
        if (account.getBalance() < amount) {
            QMessageBox::warning(this, "Error", "Insufficient funds");
            return;
        }
        amount = -amount; // Negate the amount for withdrawals
    }

    // Increments the balance as necessary
    account.incrementBalance(amount);

    // Record the transaction
    TransactionRecord record;
    record.sourceAccount = QString::fromStdString(account.getAccountType()).toLower().toStdString(); // Normalize to lowercase
    record.destinationAccount = QString::fromStdString(account.getAccountType()).toLower().toStdString(); // Normalize to lowercase
    record.amount = amount;
    record.balanceAfterTransaction = account.getBalance(); // Store the balance after the transaction

    // Add a timestamp for the transaction
    std::time_t t = std::time(nullptr);
    std::stringstream ss;
    ss << std::ctime(&t);
    record.timestamp = ss.str();

    transactionHistory.addTransaction(record);

    inputField->clear();
    loginSystem.saveUsersToFile();
    updateBalanceDisplays();
}

void MainWindow::populateTransactionTable() {
    const auto& transactions = transactionHistory.getTransactionHistory();
    ui->transactionTable->setRowCount(transactions.size());

    for (int row = 0; row < transactions.size(); ++row) {
        const auto& transaction = transactions[row];
        ui->transactionTable->setItem(row, 0, new QTableWidgetItem(QString::fromStdString(transaction.sourceAccount)));
        ui->transactionTable->setItem(row, 1, new QTableWidgetItem(QString::fromStdString(transaction.destinationAccount)));
        ui->transactionTable->setItem(row, 2, new QTableWidgetItem(QString::number(transaction.amount, 'f', 2)));
        ui->transactionTable->setItem(row, 3, new QTableWidgetItem(QString::fromStdString(transaction.timestamp)));
    }

    // resize columns to fit content properly
    ui->transactionTable->resizeColumnsToContents();
}

/**
 * @author Mustafa Kanpurwala
 * @brief updates the account balance display
 * Gets the checking and savings account balance from the current user, updates the appropriate displays
 */
void MainWindow::updateBalanceDisplays(){
    

    try {
        auto& userData = loginSystem.getUserData(currentUser);
        ui->checkingBalanceLabel->setText(
            QString("$%1").arg(userData.checkingAccount.getBalance(), 0, 'f', 2));
        ui->savingsBalanceLabel->setText(
            QString("$%1").arg(userData.savingsAccount.getBalance(), 0, 'f', 2));
    } catch (const std::exception& e) {
        QMessageBox::critical(this, "Error", 
            "Failed to load account balances");
    }

    
}



// Handle login button click
void MainWindow::on_loginButton_clicked()
{
    QString username = ui->usernameInput->text();
    QString password = ui->passwordInput->text();

    if (loginSystem.authenticate(username.toStdString(), password.toStdString())) {
        currentUser = username.toStdString();
        QMessageBox::information(this, "Login", "Login successful!");
        updateBalanceDisplays();
        showAccountScreen();
    } else {
        QMessageBox::warning(this, "Login", "Invalid credentials.");
    }
}

// Handle register button click
void MainWindow::on_registerButton_clicked()
{
    QString username = ui->regUsernameInput->text();
    QString password = ui->regPasswordInput->text();

    if (loginSystem.registerUser(username.toStdString(), password.toStdString())) {
        QMessageBox::information(this, "Registration", "User registered successfully!");
        showLoginForm(); // Switch back to the login form after registration
    } else {
        QMessageBox::warning(this, "Registration", "Username already exists!");
    }
}

/**
 * @author Hassan Zeeshan
 * @brief button to access transfer funds page. Balance for accounts is also updated and displayed
 */
void MainWindow::on_transferFundsButton_clicked()
{
    showTransactionScreen();
    updateTransferBalanceDisplay();
}

// Switch to the login form
void MainWindow::showLoginForm()
{
    ui->stackedWidget->setCurrentIndex(0); // Index 0 is the login form
}

// Switch to the registration form
void MainWindow::showRegistrationForm()
{
    ui->stackedWidget->setCurrentIndex(1); // Index 1 is the registration form
}

void MainWindow::showAccountScreen(){
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::showTransactionScreen(){
    ui->amtTextBox->clear();
    ui->stackedWidget->setCurrentIndex(3);
}

/**
 * @brief Displays the details of the savings account.
 * Retrieves the current user's savings account data and displays its details,
 * including transaction history, balance, and account information.
 */
 void MainWindow::onSavingsInquiryClicked() {
    auto& userData = loginSystem.getUserData(currentUser);
    displayAccountDetails(userData.savingsAccount, "Savings Account");
}

/**
 * @brief Displays the details of the checking account.
 * Retrieves the current user's checking account data and displays its details,
 * including transaction history, balance, and account information.
 */
void MainWindow::onCheckingInquiryClicked() {
    auto& userData = loginSystem.getUserData(currentUser);
    displayAccountDetails(userData.checkingAccount, "Checking Account");
}

/**
 * @brief Displays account details and transaction history.
 * Creates a dynamic UI to show the account type, account number, username,
 * current balance, and a table of transaction history for the given account.
 * Includes a "Go Back" button to return to the account screen.
 * 
 * @param account The account whose details are to be displayed.
 * @param accountType A string representing the type of the account (e.g., "Checking Account").
 */
void MainWindow::displayAccountDetails(const Account& account, const QString& accountType) {
    QString accountNumber = (account.getAccountType() == "checking") ? "****1234" : "****5678";

    QLabel* accountTypeLabel = new QLabel("Account Type: " + accountType, this);
    QLabel* accountNumberLabel = new QLabel("Account Number: " + accountNumber, this);
    QLabel* usernameLabel = new QLabel("Username: " + QString::fromStdString(currentUser), this);
    QLabel* currentBalanceLabel = new QLabel(QString("Current Balance: $%1").arg(account.getBalance(), 0, 'f', 2), this);

    QTableWidget* transactionTable = new QTableWidget(this);
    transactionTable->setColumnCount(5);
    transactionTable->setHorizontalHeaderLabels({"Source Account", "Destination Account", "Amount", "Timestamp", "Balance After"});

    const auto& transactions = transactionHistory.getTransactionHistory();
    int row = 0;

    QString accountTypeLower = QString::fromStdString(account.getAccountType()).toLower(); // Normalize to lowercase

    for (const auto& transaction : transactions) {
        // Include transactions where the account is either the source or the destination
        if (QString::fromStdString(transaction.sourceAccount) == accountTypeLower || 
            QString::fromStdString(transaction.destinationAccount) == accountTypeLower) {
            transactionTable->insertRow(row);
            transactionTable->setItem(row, 0, new QTableWidgetItem(QString::fromStdString(transaction.sourceAccount)));
            transactionTable->setItem(row, 1, new QTableWidgetItem(QString::fromStdString(transaction.destinationAccount)));
            transactionTable->setItem(row, 2, new QTableWidgetItem(QString::number(transaction.amount, 'f', 2)));
            transactionTable->setItem(row, 3, new QTableWidgetItem(QString::fromStdString(transaction.timestamp)));
            transactionTable->setItem(row, 4, new QTableWidgetItem(QString::number(transaction.balanceAfterTransaction, 'f', 2)));
            ++row;
        }
    }

    transactionTable->resizeColumnsToContents();

    QPushButton* goBackButton = new QPushButton("Go Back", this);
    connect(goBackButton, &QPushButton::clicked, this, &MainWindow::onBackToAccountClicked);

    QVBoxLayout* layout = new QVBoxLayout();
    layout->addWidget(accountTypeLabel);
    layout->addWidget(accountNumberLabel);
    layout->addWidget(usernameLabel);
    layout->addWidget(currentBalanceLabel);
    layout->addWidget(transactionTable);
    layout->addWidget(goBackButton);

    QWidget* accountDetailsPage = new QWidget(this);
    accountDetailsPage->setLayout(layout);

    int pageIndex = ui->stackedWidget->addWidget(accountDetailsPage);
    ui->stackedWidget->setCurrentIndex(pageIndex);
}

/**
 * @author Hassan Zeeshan
 * @brief Correctly transfers funds between accounts. Also manages user error.
 */
void MainWindow::on_transferButton_clicked() {
    // Get current user data
    auto& userData = loginSystem.getUserData(currentUser);

    // Get transfer amount
    QString amountText = ui->amtTextBox->text();
    bool ok;
    double amount = amountText.toDouble(&ok);

    // Checking if user input is valid
    if (!ok || amount <= 0) {
        QMessageBox::warning(this, "Invalid Input", "Please enter a valid amount.");
        return;
    }

    QString source = ui->sourceDrop->currentText().toLower(); // Normalize to lowercase
    QString destination = ui->destDrop->currentText().toLower(); // Normalize to lowercase

    // checking if source and destination drop box values are the same
    if (source == destination) {
        QMessageBox::warning(this, "Invalid Accounts", "Source cannot be the same as the Destination!");
        return;
    }

    // Checking what the source drop down is
    Account& sourceAccount = (source == "checking") 
        ? userData.checkingAccount 
        : userData.savingsAccount;

    // Checking what the desination drop box is
    Account& destAccount = (destination == "checking") 
        ? userData.checkingAccount 
        : userData.savingsAccount;

    // Making sure the user has enough funds
    if (amount > sourceAccount.getBalance()) {
        QMessageBox::warning(this, "Insufficient Funds", "Not enough funds to make this transaction!");
        return;
    }

    // Perform the transfer
    sourceAccount.incrementBalance(-amount);
    destAccount.incrementBalance(amount);

    // Record the transaction for the source account
    TransactionRecord sourceRecord;
    sourceRecord.sourceAccount = source.toStdString(); // Already normalized to lowercase
    sourceRecord.destinationAccount = destination.toStdString(); // Already normalized to lowercase
    sourceRecord.amount = -amount;
    sourceRecord.balanceAfterTransaction = sourceAccount.getBalance();

    // Add a timestamp
    std::time_t t = std::time(nullptr);
    std::stringstream ss;
    ss << std::ctime(&t);
    sourceRecord.timestamp = ss.str();

    transactionHistory.addTransaction(sourceRecord);

    // Record the transaction for the destination account
    TransactionRecord destRecord;
    destRecord.sourceAccount = source.toStdString(); // Already normalized to lowercase
    destRecord.destinationAccount = destination.toStdString(); // Already normalized to lowercase
    destRecord.amount = amount;
    destRecord.balanceAfterTransaction = destAccount.getBalance();
    destRecord.timestamp = sourceRecord.timestamp; // Use the same timestamp

    transactionHistory.addTransaction(destRecord);

    // Save the transaction
    loginSystem.saveUsersToFile();

    // Update UI and show success
    updateBalanceDisplays();
    QMessageBox::information(this, "Success", "Transfer completed successfully.");
    showAccountScreen();
}


/**
 * @author Hassan Zeeshan
 * @brief Changing Screens
 */
void MainWindow::on_pushButton_clicked()
{
    // Switching back to account page
    ui->stackedWidget->setCurrentIndex(2);
}

/**
 * @author Hassan Zeeshan
 * @brief Updating balance display on transfer page
 */
void MainWindow::updateTransferBalanceDisplay() {
    auto& userData = loginSystem.getUserData(currentUser);  // Get user data once

    //Getting value of drop down
    QString source = ui->sourceDrop->currentText();
    QString destination = ui->destDrop->currentText();

    // Setting variables for balance
    double sourceBalance = 0.0;
    double destBalance = 0.0;

    // Getting balance based on drop down
    if (source == "checking") {
        sourceBalance = userData.checkingAccount.getBalance();
    } else if (source == "savings") {
        sourceBalance = userData.savingsAccount.getBalance();
    }

    if (destination == "checking") {
        destBalance = userData.checkingAccount.getBalance();
    } else if (destination == "savings") {
        destBalance = userData.savingsAccount.getBalance();
    }

    // Update UI Labels
    ui->sourceBalanceLabel->setText(QString("Balance: $%1").arg(sourceBalance, 0, 'f', 2));
    ui->destBalanceLabel->setText(QString("Balance: $%1").arg(destBalance, 0, 'f', 2));
}

void MainWindow::on_budgetButton_clicked() {
    showBudgetScreen();
}


// budget screen functions 
void MainWindow::showBudgetScreen() {
    auto& userData = loginSystem.getUserData(currentUser);
    ui->incomeInput->setText(QString::number(userData.userBudget.getIncome(), 'f', 2));
    updateBudgetDisplays();
    ui->stackedWidget->setCurrentIndex(4); // Assuming index 4 is budget page
}

void MainWindow::updateBudgetDisplays() {
    auto& userData = loginSystem.getUserData(currentUser);
    
    ui->necessitiesLabel->setText(QString("$%1").arg(userData.userBudget.getNecessities(), 0, 'f', 2));
    ui->wantsLabel->setText(QString("$%1").arg(userData.userBudget.getWants(), 0, 'f', 2));
    ui->savingsLabel->setText(QString("$%1").arg(userData.userBudget.getSavings(), 0, 'f', 2));
    
    // Clear and repopulate custom categories
    ui->customCategoriesList->clear();
    for (const auto& categoryPair : userData.userBudget.getCustomCategories()) {
        const auto& category = categoryPair.first;
        const auto& amount = categoryPair.second;
        ui->customCategoriesList->addItem(
            QString("%1: $%2").arg(QString::fromStdString(category)).arg(amount, 0, 'f', 2));
    }
}

void MainWindow::on_calculateBudget_clicked() {
    bool ok;
    double income = ui->incomeInput->text().toDouble(&ok);
    
    if (!ok || income <= 0) {
        QMessageBox::warning(this, "Invalid Input", "Please enter a valid positive income");
        return;
    }
    
    auto& userData = loginSystem.getUserData(currentUser);
    userData.userBudget.setIncome(income);
    updateBudgetDisplays();
}

void MainWindow::on_saveBudget_clicked() {
    loginSystem.saveUsersToFile();
    QMessageBox::information(this, "Success", "Budget saved successfully!");
}

void MainWindow::on_addCustomCategory_clicked() {
    QString category = ui->customCategoryInput->text();
    bool ok;
    double amount = ui->customAmountInput->text().toDouble(&ok);
    
    if (category.isEmpty() || !ok || amount <= 0) {
        QMessageBox::warning(this, "Invalid Input", "Please enter valid category name and amount");
        return;
    }
    
    auto& userData = loginSystem.getUserData(currentUser);
    userData.userBudget.setCustomBudget(category.toStdString(), amount);
    updateBudgetDisplays();
    
    // Clear inputs
    ui->customCategoryInput->clear();
    ui->customAmountInput->clear();
}

void MainWindow::onBackToAccountClicked() {
    // Go back to account page (index 2)
    ui->stackedWidget->setCurrentIndex(2); 
    updateBalanceDisplays(); // Refresh balances if needed
}
