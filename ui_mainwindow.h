/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *loginPage;
    QVBoxLayout *verticalLayout_Login;
    QLabel *logoLabel;
    QLabel *loginTitle;
    QLineEdit *usernameInput;
    QLineEdit *passwordInput;
    QPushButton *loginButton;
    QPushButton *showRegistrationButton;
    QWidget *registrationPage;
    QVBoxLayout *verticalLayout_Register;
    QLabel *logoLabel1;
    QLabel *registerTitle;
    QLineEdit *regUsernameInput;
    QLineEdit *regPasswordInput;
    QPushButton *registerButton;
    QPushButton *showLoginButton;
    QWidget *accountPage;
    QVBoxLayout *verticalLayout_Account;
    QLabel *label;
    QHBoxLayout *hboxlayout;
    QPushButton *transferFundsButton;
    QPushButton *budgetButton;
    QPushButton *viewHistoryButton;
    QGroupBox *checkingGroup;
    QGridLayout *gridLayout;
    QLabel *checkingBalanceText;
    QLabel *checkingBalanceLabel;
    QLineEdit *checkingAmountInput;
    QPushButton *checkingDepositBtn;
    QPushButton *checkingWithdrawBtn;
    QGroupBox *savingsGroup;
    QGridLayout *gridLayout_2;
    QLabel *savingsBalanceText;
    QLabel *savingsBalanceLabel;
    QLineEdit *savingsAmountInput;
    QPushButton *savingsDepositBtn;
    QPushButton *savingsWithdrawBtn;
    QPushButton *logoutButton;
    QWidget *transferPage;
    QVBoxLayout *verticalLayout_2;
    QLabel *transferLabel;
    QPushButton *pushButton;
    QGroupBox *sourceGroup;
    QGridLayout *gridLayout_3;
    QLabel *sourceLabel;
    QComboBox *sourceDrop;
    QLabel *sourceBalanceLabel;
    QGroupBox *destGroup;
    QGridLayout *gridLayout_4;
    QComboBox *destDrop;
    QLabel *destLabel;
    QLabel *destBalanceLabel;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *amtLabel;
    QLineEdit *amtTextBox;
    QPushButton *transferButton;
    QWidget *budgetPage;
    QVBoxLayout *verticalLayout_Budget;
    QLabel *label1;
    QGroupBox *groupBox;
    QHBoxLayout *hboxLayout;
    QLineEdit *incomeInput;
    QPushButton *calculateBudget;
    QGroupBox *groupBox1;
    QFormLayout *formLayout;
    QLabel *label2;
    QLabel *necessitiesLabel;
    QLabel *label3;
    QLabel *wantsLabel;
    QLabel *label4;
    QLabel *savingsLabel;
    QGroupBox *groupBox2;
    QVBoxLayout *vboxLayout;
    QListWidget *customCategoriesList;
    QHBoxLayout *hboxLayout1;
    QLineEdit *customCategoryInput;
    QLineEdit *customAmountInput;
    QPushButton *addCustomCategory;
    QPushButton *saveBudget;
    QPushButton *backToAccountButton;
    QWidget *transactionHistoryPage;
    QVBoxLayout *verticalLayout_TransactionHistory;
    QLabel *transactionHistoryLabel;
    QTableWidget *transactionTable;
    QPushButton *backToAccountBtn;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(790, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        loginPage = new QWidget();
        loginPage->setObjectName(QString::fromUtf8("loginPage"));
        verticalLayout_Login = new QVBoxLayout(loginPage);
        verticalLayout_Login->setObjectName(QString::fromUtf8("verticalLayout_Login"));
        logoLabel = new QLabel(loginPage);
        logoLabel->setObjectName(QString::fromUtf8("logoLabel"));
        logoLabel->setMinimumSize(QSize(150, 150));
        logoLabel->setMaximumSize(QSize(150, 150));
        logoLabel->setStyleSheet(QString::fromUtf8("margin-bottom: 15px;"));
        logoLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/bank_logo.png")));
        logoLabel->setScaledContents(true);
        logoLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_Login->addWidget(logoLabel);

        loginTitle = new QLabel(loginPage);
        loginTitle->setObjectName(QString::fromUtf8("loginTitle"));
        loginTitle->setStyleSheet(QString::fromUtf8("font-size: 20px; font-weight: bold; color: #82878c; margin-bottom: 20px;"));
        loginTitle->setAlignment(Qt::AlignCenter);

        verticalLayout_Login->addWidget(loginTitle);

        usernameInput = new QLineEdit(loginPage);
        usernameInput->setObjectName(QString::fromUtf8("usernameInput"));
        usernameInput->setStyleSheet(QString::fromUtf8("padding: 8px; border: 1px solid #bdc3c7; border-radius: 4px;"));

        verticalLayout_Login->addWidget(usernameInput);

        passwordInput = new QLineEdit(loginPage);
        passwordInput->setObjectName(QString::fromUtf8("passwordInput"));
        passwordInput->setStyleSheet(QString::fromUtf8("padding: 8px; border: 1px solid #bdc3c7; border-radius: 4px;"));
        passwordInput->setEchoMode(QLineEdit::Password);

        verticalLayout_Login->addWidget(passwordInput);

        loginButton = new QPushButton(loginPage);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setStyleSheet(QString::fromUtf8("\n"
"            QPushButton {\n"
"              background-color: #3498db;\n"
"              color: white;\n"
"              border: none;\n"
"              padding: 10px;\n"
"              border-radius: 4px;\n"
"              font-weight: bold;\n"
"            }\n"
"            QPushButton:hover {\n"
"              background-color: #2980b9;\n"
"            }\n"
"           "));

        verticalLayout_Login->addWidget(loginButton);

        showRegistrationButton = new QPushButton(loginPage);
        showRegistrationButton->setObjectName(QString::fromUtf8("showRegistrationButton"));
        showRegistrationButton->setStyleSheet(QString::fromUtf8("\n"
"            QPushButton {\n"
"              background-color: #2ecc71;\n"
"              color: white;\n"
"              border: none;\n"
"              padding: 10px;\n"
"              border-radius: 4px;\n"
"              font-weight: bold;\n"
"            }\n"
"            QPushButton:hover {\n"
"              background-color: #27ae60;\n"
"            }\n"
"           "));

        verticalLayout_Login->addWidget(showRegistrationButton);

        stackedWidget->addWidget(loginPage);
        registrationPage = new QWidget();
        registrationPage->setObjectName(QString::fromUtf8("registrationPage"));
        verticalLayout_Register = new QVBoxLayout(registrationPage);
        verticalLayout_Register->setObjectName(QString::fromUtf8("verticalLayout_Register"));
        logoLabel1 = new QLabel(registrationPage);
        logoLabel1->setObjectName(QString::fromUtf8("logoLabel1"));
        logoLabel1->setMinimumSize(QSize(150, 150));
        logoLabel1->setMaximumSize(QSize(150, 150));
        logoLabel1->setStyleSheet(QString::fromUtf8("margin-bottom: 15px;"));
        logoLabel1->setPixmap(QPixmap(QString::fromUtf8(":/images/bank_logo.png")));
        logoLabel1->setScaledContents(true);
        logoLabel1->setAlignment(Qt::AlignCenter);

        verticalLayout_Register->addWidget(logoLabel1);

        registerTitle = new QLabel(registrationPage);
        registerTitle->setObjectName(QString::fromUtf8("registerTitle"));
        registerTitle->setStyleSheet(QString::fromUtf8("font-size: 20px; font-weight: bold; color: #82878c; margin-bottom: 20px;"));
        registerTitle->setAlignment(Qt::AlignCenter);

        verticalLayout_Register->addWidget(registerTitle);

        regUsernameInput = new QLineEdit(registrationPage);
        regUsernameInput->setObjectName(QString::fromUtf8("regUsernameInput"));
        regUsernameInput->setStyleSheet(QString::fromUtf8("padding: 8px; border: 1px solid #bdc3c7; border-radius: 4px;"));

        verticalLayout_Register->addWidget(regUsernameInput);

        regPasswordInput = new QLineEdit(registrationPage);
        regPasswordInput->setObjectName(QString::fromUtf8("regPasswordInput"));
        regPasswordInput->setStyleSheet(QString::fromUtf8("padding: 8px; border: 1px solid #bdc3c7; border-radius: 4px;"));
        regPasswordInput->setEchoMode(QLineEdit::Password);

        verticalLayout_Register->addWidget(regPasswordInput);

        registerButton = new QPushButton(registrationPage);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));
        registerButton->setStyleSheet(QString::fromUtf8("\n"
"            QPushButton {\n"
"              background-color: #2ecc71;\n"
"              color: white;\n"
"              border: none;\n"
"              padding: 10px;\n"
"              border-radius: 4px;\n"
"              font-weight: bold;\n"
"            }\n"
"            QPushButton:hover {\n"
"              background-color: #27ae60;\n"
"            }\n"
"           "));

        verticalLayout_Register->addWidget(registerButton);

        showLoginButton = new QPushButton(registrationPage);
        showLoginButton->setObjectName(QString::fromUtf8("showLoginButton"));
        showLoginButton->setStyleSheet(QString::fromUtf8("\n"
"            QPushButton {\n"
"              background-color: #e74c3c;\n"
"              color: white;\n"
"              border: none;\n"
"              padding: 10px;\n"
"              border-radius: 4px;\n"
"              font-weight: bold;\n"
"            }\n"
"            QPushButton:hover {\n"
"              background-color: #c0392b;\n"
"            }\n"
"           "));

        verticalLayout_Register->addWidget(showLoginButton);

        stackedWidget->addWidget(registrationPage);
        accountPage = new QWidget();
        accountPage->setObjectName(QString::fromUtf8("accountPage"));
        verticalLayout_Account = new QVBoxLayout(accountPage);
        verticalLayout_Account->setObjectName(QString::fromUtf8("verticalLayout_Account"));
        label = new QLabel(accountPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font-size: 18pt; font-weight: bold;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_Account->addWidget(label);

        hboxlayout = new QHBoxLayout();
        hboxlayout->setObjectName(QString::fromUtf8("hboxlayout"));
        transferFundsButton = new QPushButton(accountPage);
        transferFundsButton->setObjectName(QString::fromUtf8("transferFundsButton"));
        transferFundsButton->setMinimumSize(QSize(100, 30));
        transferFundsButton->setMaximumSize(QSize(100, 30));

        hboxlayout->addWidget(transferFundsButton);

        budgetButton = new QPushButton(accountPage);
        budgetButton->setObjectName(QString::fromUtf8("budgetButton"));
        budgetButton->setMinimumSize(QSize(100, 30));
        budgetButton->setMaximumSize(QSize(100, 30));

        hboxlayout->addWidget(budgetButton);

        viewHistoryButton = new QPushButton(accountPage);
        viewHistoryButton->setObjectName(QString::fromUtf8("viewHistoryButton"));
        viewHistoryButton->setMinimumSize(QSize(100, 30));
        viewHistoryButton->setMaximumSize(QSize(100, 30));

        hboxlayout->addWidget(viewHistoryButton);


        verticalLayout_Account->addLayout(hboxlayout);

        checkingGroup = new QGroupBox(accountPage);
        checkingGroup->setObjectName(QString::fromUtf8("checkingGroup"));
        gridLayout = new QGridLayout(checkingGroup);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        checkingBalanceText = new QLabel(checkingGroup);
        checkingBalanceText->setObjectName(QString::fromUtf8("checkingBalanceText"));

        gridLayout->addWidget(checkingBalanceText, 0, 0, 1, 1);

        checkingBalanceLabel = new QLabel(checkingGroup);
        checkingBalanceLabel->setObjectName(QString::fromUtf8("checkingBalanceLabel"));

        gridLayout->addWidget(checkingBalanceLabel, 0, 1, 1, 1);

        checkingAmountInput = new QLineEdit(checkingGroup);
        checkingAmountInput->setObjectName(QString::fromUtf8("checkingAmountInput"));

        gridLayout->addWidget(checkingAmountInput, 1, 0, 1, 1);

        checkingDepositBtn = new QPushButton(checkingGroup);
        checkingDepositBtn->setObjectName(QString::fromUtf8("checkingDepositBtn"));

        gridLayout->addWidget(checkingDepositBtn, 2, 0, 1, 1);

        checkingWithdrawBtn = new QPushButton(checkingGroup);
        checkingWithdrawBtn->setObjectName(QString::fromUtf8("checkingWithdrawBtn"));

        gridLayout->addWidget(checkingWithdrawBtn, 2, 1, 1, 1);


        verticalLayout_Account->addWidget(checkingGroup);

        savingsGroup = new QGroupBox(accountPage);
        savingsGroup->setObjectName(QString::fromUtf8("savingsGroup"));
        gridLayout_2 = new QGridLayout(savingsGroup);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        savingsBalanceText = new QLabel(savingsGroup);
        savingsBalanceText->setObjectName(QString::fromUtf8("savingsBalanceText"));

        gridLayout_2->addWidget(savingsBalanceText, 0, 0, 1, 1);

        savingsBalanceLabel = new QLabel(savingsGroup);
        savingsBalanceLabel->setObjectName(QString::fromUtf8("savingsBalanceLabel"));

        gridLayout_2->addWidget(savingsBalanceLabel, 0, 1, 1, 1);

        savingsAmountInput = new QLineEdit(savingsGroup);
        savingsAmountInput->setObjectName(QString::fromUtf8("savingsAmountInput"));

        gridLayout_2->addWidget(savingsAmountInput, 1, 0, 1, 1);

        savingsDepositBtn = new QPushButton(savingsGroup);
        savingsDepositBtn->setObjectName(QString::fromUtf8("savingsDepositBtn"));

        gridLayout_2->addWidget(savingsDepositBtn, 2, 0, 1, 1);

        savingsWithdrawBtn = new QPushButton(savingsGroup);
        savingsWithdrawBtn->setObjectName(QString::fromUtf8("savingsWithdrawBtn"));

        gridLayout_2->addWidget(savingsWithdrawBtn, 2, 1, 1, 1);


        verticalLayout_Account->addWidget(savingsGroup);

        logoutButton = new QPushButton(accountPage);
        logoutButton->setObjectName(QString::fromUtf8("logoutButton"));

        verticalLayout_Account->addWidget(logoutButton);

        stackedWidget->addWidget(accountPage);
        transferPage = new QWidget();
        transferPage->setObjectName(QString::fromUtf8("transferPage"));
        verticalLayout_2 = new QVBoxLayout(transferPage);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        transferLabel = new QLabel(transferPage);
        transferLabel->setObjectName(QString::fromUtf8("transferLabel"));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        transferLabel->setFont(font);

        verticalLayout_2->addWidget(transferLabel, 0, Qt::AlignHCenter);

        pushButton = new QPushButton(transferPage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(100, 30));

        verticalLayout_2->addWidget(pushButton, 0, Qt::AlignRight);

        sourceGroup = new QGroupBox(transferPage);
        sourceGroup->setObjectName(QString::fromUtf8("sourceGroup"));
        gridLayout_3 = new QGridLayout(sourceGroup);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        sourceLabel = new QLabel(sourceGroup);
        sourceLabel->setObjectName(QString::fromUtf8("sourceLabel"));
        sourceLabel->setMaximumSize(QSize(200, 16777215));

        gridLayout_3->addWidget(sourceLabel, 0, 0, 1, 1);

        sourceDrop = new QComboBox(sourceGroup);
        sourceDrop->addItem(QString());
        sourceDrop->addItem(QString());
        sourceDrop->setObjectName(QString::fromUtf8("sourceDrop"));
        sourceDrop->setMinimumSize(QSize(100, 30));
        sourceDrop->setMaximumSize(QSize(100, 30));

        gridLayout_3->addWidget(sourceDrop, 0, 1, 1, 1);

        sourceBalanceLabel = new QLabel(sourceGroup);
        sourceBalanceLabel->setObjectName(QString::fromUtf8("sourceBalanceLabel"));

        gridLayout_3->addWidget(sourceBalanceLabel, 1, 0, 1, 2);


        verticalLayout_2->addWidget(sourceGroup);

        destGroup = new QGroupBox(transferPage);
        destGroup->setObjectName(QString::fromUtf8("destGroup"));
        gridLayout_4 = new QGridLayout(destGroup);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        destDrop = new QComboBox(destGroup);
        destDrop->addItem(QString());
        destDrop->addItem(QString());
        destDrop->setObjectName(QString::fromUtf8("destDrop"));
        destDrop->setMaximumSize(QSize(100, 30));

        gridLayout_4->addWidget(destDrop, 0, 1, 1, 1);

        destLabel = new QLabel(destGroup);
        destLabel->setObjectName(QString::fromUtf8("destLabel"));
        destLabel->setMaximumSize(QSize(200, 16777215));

        gridLayout_4->addWidget(destLabel, 0, 0, 1, 1);

        destBalanceLabel = new QLabel(destGroup);
        destBalanceLabel->setObjectName(QString::fromUtf8("destBalanceLabel"));

        gridLayout_4->addWidget(destBalanceLabel, 1, 0, 1, 1);


        verticalLayout_2->addWidget(destGroup);

        groupBox_3 = new QGroupBox(transferPage);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        amtLabel = new QLabel(groupBox_3);
        amtLabel->setObjectName(QString::fromUtf8("amtLabel"));
        amtLabel->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_3->addWidget(amtLabel);

        amtTextBox = new QLineEdit(groupBox_3);
        amtTextBox->setObjectName(QString::fromUtf8("amtTextBox"));
        amtTextBox->setMaximumSize(QSize(100, 30));

        horizontalLayout_3->addWidget(amtTextBox);


        verticalLayout_2->addWidget(groupBox_3);

        transferButton = new QPushButton(transferPage);
        transferButton->setObjectName(QString::fromUtf8("transferButton"));

        verticalLayout_2->addWidget(transferButton);

        stackedWidget->addWidget(transferPage);
        budgetPage = new QWidget();
        budgetPage->setObjectName(QString::fromUtf8("budgetPage"));
        verticalLayout_Budget = new QVBoxLayout(budgetPage);
        verticalLayout_Budget->setObjectName(QString::fromUtf8("verticalLayout_Budget"));
        label1 = new QLabel(budgetPage);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setFont(font);
        label1->setAlignment(Qt::AlignCenter);

        verticalLayout_Budget->addWidget(label1);

        groupBox = new QGroupBox(budgetPage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        hboxLayout = new QHBoxLayout(groupBox);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        incomeInput = new QLineEdit(groupBox);
        incomeInput->setObjectName(QString::fromUtf8("incomeInput"));

        hboxLayout->addWidget(incomeInput);

        calculateBudget = new QPushButton(groupBox);
        calculateBudget->setObjectName(QString::fromUtf8("calculateBudget"));

        hboxLayout->addWidget(calculateBudget);


        verticalLayout_Budget->addWidget(groupBox);

        groupBox1 = new QGroupBox(budgetPage);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        formLayout = new QFormLayout(groupBox1);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label2 = new QLabel(groupBox1);
        label2->setObjectName(QString::fromUtf8("label2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label2);

        necessitiesLabel = new QLabel(groupBox1);
        necessitiesLabel->setObjectName(QString::fromUtf8("necessitiesLabel"));

        formLayout->setWidget(0, QFormLayout::FieldRole, necessitiesLabel);

        label3 = new QLabel(groupBox1);
        label3->setObjectName(QString::fromUtf8("label3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label3);

        wantsLabel = new QLabel(groupBox1);
        wantsLabel->setObjectName(QString::fromUtf8("wantsLabel"));

        formLayout->setWidget(1, QFormLayout::FieldRole, wantsLabel);

        label4 = new QLabel(groupBox1);
        label4->setObjectName(QString::fromUtf8("label4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label4);

        savingsLabel = new QLabel(groupBox1);
        savingsLabel->setObjectName(QString::fromUtf8("savingsLabel"));

        formLayout->setWidget(2, QFormLayout::FieldRole, savingsLabel);


        verticalLayout_Budget->addWidget(groupBox1);

        groupBox2 = new QGroupBox(budgetPage);
        groupBox2->setObjectName(QString::fromUtf8("groupBox2"));
        vboxLayout = new QVBoxLayout(groupBox2);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        customCategoriesList = new QListWidget(groupBox2);
        customCategoriesList->setObjectName(QString::fromUtf8("customCategoriesList"));

        vboxLayout->addWidget(customCategoriesList);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        customCategoryInput = new QLineEdit(groupBox2);
        customCategoryInput->setObjectName(QString::fromUtf8("customCategoryInput"));

        hboxLayout1->addWidget(customCategoryInput);

        customAmountInput = new QLineEdit(groupBox2);
        customAmountInput->setObjectName(QString::fromUtf8("customAmountInput"));

        hboxLayout1->addWidget(customAmountInput);

        addCustomCategory = new QPushButton(groupBox2);
        addCustomCategory->setObjectName(QString::fromUtf8("addCustomCategory"));

        hboxLayout1->addWidget(addCustomCategory);


        vboxLayout->addLayout(hboxLayout1);


        verticalLayout_Budget->addWidget(groupBox2);

        saveBudget = new QPushButton(budgetPage);
        saveBudget->setObjectName(QString::fromUtf8("saveBudget"));

        verticalLayout_Budget->addWidget(saveBudget);

        backToAccountButton = new QPushButton(budgetPage);
        backToAccountButton->setObjectName(QString::fromUtf8("backToAccountButton"));

        verticalLayout_Budget->addWidget(backToAccountButton);

        stackedWidget->addWidget(budgetPage);
        transactionHistoryPage = new QWidget();
        transactionHistoryPage->setObjectName(QString::fromUtf8("transactionHistoryPage"));
        verticalLayout_TransactionHistory = new QVBoxLayout(transactionHistoryPage);
        verticalLayout_TransactionHistory->setObjectName(QString::fromUtf8("verticalLayout_TransactionHistory"));
        transactionHistoryLabel = new QLabel(transactionHistoryPage);
        transactionHistoryLabel->setObjectName(QString::fromUtf8("transactionHistoryLabel"));
        transactionHistoryLabel->setStyleSheet(QString::fromUtf8("font-size: 18pt; font-weight: bold;"));
        transactionHistoryLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_TransactionHistory->addWidget(transactionHistoryLabel);

        transactionTable = new QTableWidget(transactionHistoryPage);
        if (transactionTable->columnCount() < 4)
            transactionTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        transactionTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        transactionTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        transactionTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        transactionTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        transactionTable->setObjectName(QString::fromUtf8("transactionTable"));
        transactionTable->setRowCount(0);
        transactionTable->setColumnCount(4);

        verticalLayout_TransactionHistory->addWidget(transactionTable);

        backToAccountBtn = new QPushButton(transactionHistoryPage);
        backToAccountBtn->setObjectName(QString::fromUtf8("backToAccountBtn"));

        verticalLayout_TransactionHistory->addWidget(backToAccountBtn);

        stackedWidget->addWidget(transactionHistoryPage);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Banking App", nullptr));
        loginTitle->setText(QCoreApplication::translate("MainWindow", "Login to Your Account", nullptr));
        usernameInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        passwordInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        showRegistrationButton->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        registerTitle->setText(QCoreApplication::translate("MainWindow", "Create New Account", nullptr));
        regUsernameInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        regPasswordInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        registerButton->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        showLoginButton->setText(QCoreApplication::translate("MainWindow", "Back to Login", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Account Overview", nullptr));
        transferFundsButton->setText(QCoreApplication::translate("MainWindow", "Transfer Funds", nullptr));
        budgetButton->setText(QCoreApplication::translate("MainWindow", "Budget Tool", nullptr));
        viewHistoryButton->setText(QCoreApplication::translate("MainWindow", "View History", nullptr));
        checkingGroup->setTitle(QCoreApplication::translate("MainWindow", "Checking Account (****1234)", nullptr));
        checkingBalanceText->setText(QCoreApplication::translate("MainWindow", "Balance:", nullptr));
        checkingBalanceLabel->setText(QCoreApplication::translate("MainWindow", "$500", nullptr));
        checkingAmountInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Amount", nullptr));
        checkingDepositBtn->setText(QCoreApplication::translate("MainWindow", "Deposit", nullptr));
        checkingWithdrawBtn->setText(QCoreApplication::translate("MainWindow", "Withdraw", nullptr));
        savingsGroup->setTitle(QCoreApplication::translate("MainWindow", "Savings Account (****5678)", nullptr));
        savingsBalanceText->setText(QCoreApplication::translate("MainWindow", "Balance:", nullptr));
        savingsBalanceLabel->setText(QCoreApplication::translate("MainWindow", "$1500", nullptr));
        savingsAmountInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Amount", nullptr));
        savingsDepositBtn->setText(QCoreApplication::translate("MainWindow", "Deposit", nullptr));
        savingsWithdrawBtn->setText(QCoreApplication::translate("MainWindow", "Withdraw", nullptr));
        logoutButton->setText(QCoreApplication::translate("MainWindow", "Log Out", nullptr));
        transferLabel->setText(QCoreApplication::translate("MainWindow", "Transfer Funds", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Account Info", nullptr));
        sourceGroup->setTitle(QString());
        sourceLabel->setText(QCoreApplication::translate("MainWindow", "Source Account:", nullptr));
        sourceDrop->setItemText(0, QCoreApplication::translate("MainWindow", "checking", nullptr));
        sourceDrop->setItemText(1, QCoreApplication::translate("MainWindow", "savings", nullptr));

        sourceBalanceLabel->setText(QCoreApplication::translate("MainWindow", "Balance:", nullptr));
        destGroup->setTitle(QString());
        destDrop->setItemText(0, QCoreApplication::translate("MainWindow", "checking", nullptr));
        destDrop->setItemText(1, QCoreApplication::translate("MainWindow", "savings", nullptr));

        destLabel->setText(QCoreApplication::translate("MainWindow", "Destination Account:", nullptr));
        destBalanceLabel->setText(QCoreApplication::translate("MainWindow", "Balance: ", nullptr));
        groupBox_3->setTitle(QString());
        amtLabel->setText(QCoreApplication::translate("MainWindow", "Amount ($):", nullptr));
        amtTextBox->setText(QString());
        amtTextBox->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Amount:", nullptr));
        transferButton->setText(QCoreApplication::translate("MainWindow", "Transfer", nullptr));
        label1->setText(QCoreApplication::translate("MainWindow", "Budget Calculator", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Monthly After-Tax Income", nullptr));
        incomeInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter your income", nullptr));
        calculateBudget->setText(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
        groupBox1->setTitle(QCoreApplication::translate("MainWindow", "Your 50/30/20 Numbers", nullptr));
        label2->setText(QCoreApplication::translate("MainWindow", "Necessities (50%)", nullptr));
        necessitiesLabel->setText(QCoreApplication::translate("MainWindow", "$0.00", nullptr));
        label3->setText(QCoreApplication::translate("MainWindow", "Wants (30%)", nullptr));
        wantsLabel->setText(QCoreApplication::translate("MainWindow", "$0.00", nullptr));
        label4->setText(QCoreApplication::translate("MainWindow", "Savings/Debt (20%)", nullptr));
        savingsLabel->setText(QCoreApplication::translate("MainWindow", "$0.00", nullptr));
        groupBox2->setTitle(QCoreApplication::translate("MainWindow", "Custom Budget Categories", nullptr));
        customCategoryInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Category Name", nullptr));
        customAmountInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Amount", nullptr));
        addCustomCategory->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        saveBudget->setText(QCoreApplication::translate("MainWindow", "Save Budget", nullptr));
        backToAccountButton->setText(QCoreApplication::translate("MainWindow", "Back to Account", nullptr));
        transactionHistoryLabel->setText(QCoreApplication::translate("MainWindow", "Transaction History", nullptr));
        QTableWidgetItem *___qtablewidgetitem = transactionTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Source Account", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = transactionTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Destination Account", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = transactionTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Amount", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = transactionTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Timestamp", nullptr));
        backToAccountBtn->setText(QCoreApplication::translate("MainWindow", "Back to Account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
