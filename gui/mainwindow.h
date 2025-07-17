/**
 * @authors Mustafa, Bilal, Hassan, Jimmy, Abdul-Wali
 * @file mainwindow.h
 * @brief Header class for the main window, contains functions and variables for the main window
 */
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>
#include "../src/Login.h"
#include "../src/Account.h"
#include "../src/History.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_loginButton_clicked(); // Handle login button click
    void on_registerButton_clicked(); // Handle register button click
    void showLoginForm(); // Switch to login form
    void showRegistrationForm(); // Switch to registration form
    void showAccountScreen(); // Switch to account screen
   /**/
    void on_transferFundsButton_clicked();
    void showTransactionScreen();
    void on_transferButton_clicked();

    // Handles deposits and withdrawls
    void onCheckingDeposit();
    void onCheckingWithdraw();
    void onSavingsDeposit();
    void onSavingsWithdraw();

    void onSavingsInquiryClicked(); 
    void onCheckingInquiryClicked(); 
    void displayAccountDetails(const Account& account, const QString& accountType); 

    void on_pushButton_clicked();

    void updateTransferBalanceDisplay();


    void on_budgetButton_clicked();
    void showBudgetScreen();
    void on_calculateBudget_clicked();
    void on_saveBudget_clicked();
    void on_addCustomCategory_clicked();
    void onBackToAccountClicked();

    void on_viewHistoryButton_clicked();
    void on_backToAccountButton_clicked();

private:
    Ui::MainWindow *ui;
    Login loginSystem; // Instance of the Login class
    std::string currentUser;
    Account savings {"savings", 10};
    Account checking {"checking", 5};
    History transactionHistory;
    QPushButton* savingsInquiryButton;
    QPushButton* checkingInquiryButton;

    void updateBudgetDisplays();

     void updateSourceBalanceDisplay();

    void performTransaction(Account& account, QLineEdit* inputField, bool isDeposit);
    void populateTransactionTable();
    void updateBalanceDisplays();

  
};

#endif // MAINWINDOW_H
