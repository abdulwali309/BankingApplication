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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
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
    QLineEdit *usernameInput;
    QLineEdit *passwordInput;
    QPushButton *loginButton;
    QPushButton *showRegistrationButton;
    QWidget *registrationPage;
    QVBoxLayout *verticalLayout_Register;
    QLineEdit *regUsernameInput;
    QLineEdit *regPasswordInput;
    QPushButton *registerButton;
    QPushButton *showLoginButton;
    QWidget *accountPage;
    QVBoxLayout *verticalLayout_Account;
    QLabel *label;
    QPushButton *transferFundsButton;
    QGroupBox *checkingGroup;
    QGridLayout *gridLayout;
    QPushButton *checkingWithdrawBtn;
    QPushButton *checkingDepositBtn;
    QLabel *checkingBalanceText;
    QLabel *checkingBalanceLabel;
    QGroupBox *savingsGroup;
    QGridLayout *gridLayout_2;
    QLabel *savingsBalanceText;
    QLabel *savingsBalanceLabel;
    QPushButton *savingsDepositBtn;
    QPushButton *savingsWithdrawBtn;
    QPushButton *logoutButton;
    QWidget *transferPage;
    QVBoxLayout *verticalLayout_2;
    QLabel *transferLabel;
    QGroupBox *sourceGroup;
    QGridLayout *gridLayout_3;
    QLabel *sourceLabel;
    QComboBox *sourceDrop;
    QGroupBox *destGroup;
    QGridLayout *gridLayout_4;
    QLabel *destLabel;
    QComboBox *destDrop;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *amtLabel;
    QLineEdit *amtTextBox;
    QPushButton *transferButton;

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
        usernameInput = new QLineEdit(loginPage);
        usernameInput->setObjectName(QString::fromUtf8("usernameInput"));

        verticalLayout_Login->addWidget(usernameInput);

        passwordInput = new QLineEdit(loginPage);
        passwordInput->setObjectName(QString::fromUtf8("passwordInput"));
        passwordInput->setEchoMode(QLineEdit::Password);

        verticalLayout_Login->addWidget(passwordInput);

        loginButton = new QPushButton(loginPage);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));

        verticalLayout_Login->addWidget(loginButton);

        showRegistrationButton = new QPushButton(loginPage);
        showRegistrationButton->setObjectName(QString::fromUtf8("showRegistrationButton"));

        verticalLayout_Login->addWidget(showRegistrationButton);

        stackedWidget->addWidget(loginPage);
        registrationPage = new QWidget();
        registrationPage->setObjectName(QString::fromUtf8("registrationPage"));
        verticalLayout_Register = new QVBoxLayout(registrationPage);
        verticalLayout_Register->setObjectName(QString::fromUtf8("verticalLayout_Register"));
        regUsernameInput = new QLineEdit(registrationPage);
        regUsernameInput->setObjectName(QString::fromUtf8("regUsernameInput"));

        verticalLayout_Register->addWidget(regUsernameInput);

        regPasswordInput = new QLineEdit(registrationPage);
        regPasswordInput->setObjectName(QString::fromUtf8("regPasswordInput"));
        regPasswordInput->setEchoMode(QLineEdit::Password);

        verticalLayout_Register->addWidget(regPasswordInput);

        registerButton = new QPushButton(registrationPage);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));

        verticalLayout_Register->addWidget(registerButton);

        showLoginButton = new QPushButton(registrationPage);
        showLoginButton->setObjectName(QString::fromUtf8("showLoginButton"));

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

        transferFundsButton = new QPushButton(accountPage);
        transferFundsButton->setObjectName(QString::fromUtf8("transferFundsButton"));
        transferFundsButton->setMinimumSize(QSize(100, 30));
        transferFundsButton->setMaximumSize(QSize(100, 30));

        verticalLayout_Account->addWidget(transferFundsButton, 0, Qt::AlignRight);

        checkingGroup = new QGroupBox(accountPage);
        checkingGroup->setObjectName(QString::fromUtf8("checkingGroup"));
        gridLayout = new QGridLayout(checkingGroup);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        checkingWithdrawBtn = new QPushButton(checkingGroup);
        checkingWithdrawBtn->setObjectName(QString::fromUtf8("checkingWithdrawBtn"));

        gridLayout->addWidget(checkingWithdrawBtn, 1, 1, 1, 1);

        checkingDepositBtn = new QPushButton(checkingGroup);
        checkingDepositBtn->setObjectName(QString::fromUtf8("checkingDepositBtn"));

        gridLayout->addWidget(checkingDepositBtn, 1, 0, 1, 1);

        checkingBalanceText = new QLabel(checkingGroup);
        checkingBalanceText->setObjectName(QString::fromUtf8("checkingBalanceText"));

        gridLayout->addWidget(checkingBalanceText, 0, 0, 1, 1);

        checkingBalanceLabel = new QLabel(checkingGroup);
        checkingBalanceLabel->setObjectName(QString::fromUtf8("checkingBalanceLabel"));

        gridLayout->addWidget(checkingBalanceLabel, 0, 1, 1, 1);


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

        savingsDepositBtn = new QPushButton(savingsGroup);
        savingsDepositBtn->setObjectName(QString::fromUtf8("savingsDepositBtn"));

        gridLayout_2->addWidget(savingsDepositBtn, 1, 0, 1, 1);

        savingsWithdrawBtn = new QPushButton(savingsGroup);
        savingsWithdrawBtn->setObjectName(QString::fromUtf8("savingsWithdrawBtn"));

        gridLayout_2->addWidget(savingsWithdrawBtn, 1, 1, 1, 1);


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


        verticalLayout_2->addWidget(sourceGroup);

        destGroup = new QGroupBox(transferPage);
        destGroup->setObjectName(QString::fromUtf8("destGroup"));
        gridLayout_4 = new QGridLayout(destGroup);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        destLabel = new QLabel(destGroup);
        destLabel->setObjectName(QString::fromUtf8("destLabel"));
        destLabel->setMaximumSize(QSize(200, 16777215));

        gridLayout_4->addWidget(destLabel, 0, 0, 1, 1);

        destDrop = new QComboBox(destGroup);
        destDrop->addItem(QString());
        destDrop->addItem(QString());
        destDrop->setObjectName(QString::fromUtf8("destDrop"));
        destDrop->setMaximumSize(QSize(100, 30));

        gridLayout_4->addWidget(destDrop, 0, 1, 1, 1);


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

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Banking App", nullptr));
        usernameInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        passwordInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        showRegistrationButton->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        regUsernameInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        regPasswordInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        registerButton->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        showLoginButton->setText(QCoreApplication::translate("MainWindow", "Back to Login", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Account Overview", nullptr));
        transferFundsButton->setText(QCoreApplication::translate("MainWindow", "Transfer Funds", nullptr));
        checkingGroup->setTitle(QCoreApplication::translate("MainWindow", "Checking Account (****1234)", nullptr));
        checkingWithdrawBtn->setText(QCoreApplication::translate("MainWindow", "Withdraw $20", nullptr));
        checkingDepositBtn->setText(QCoreApplication::translate("MainWindow", "Deposit $20", nullptr));
        checkingBalanceText->setText(QCoreApplication::translate("MainWindow", "Balance:", nullptr));
        checkingBalanceLabel->setText(QCoreApplication::translate("MainWindow", "$500", nullptr));
        savingsGroup->setTitle(QCoreApplication::translate("MainWindow", "Savings Account (****5678)", nullptr));
        savingsBalanceText->setText(QCoreApplication::translate("MainWindow", "Balance:", nullptr));
        savingsBalanceLabel->setText(QCoreApplication::translate("MainWindow", "$1500", nullptr));
        savingsDepositBtn->setText(QCoreApplication::translate("MainWindow", "Deposit $20", nullptr));
        savingsWithdrawBtn->setText(QCoreApplication::translate("MainWindow", "Withdraw $20", nullptr));
        logoutButton->setText(QCoreApplication::translate("MainWindow", "Log Out", nullptr));
        transferLabel->setText(QCoreApplication::translate("MainWindow", "Transfer Funds", nullptr));
        sourceGroup->setTitle(QString());
        sourceLabel->setText(QCoreApplication::translate("MainWindow", "Source Account:", nullptr));
        sourceDrop->setItemText(0, QCoreApplication::translate("MainWindow", "Chequing", nullptr));
        sourceDrop->setItemText(1, QCoreApplication::translate("MainWindow", "Savings", nullptr));

        destGroup->setTitle(QString());
        destLabel->setText(QCoreApplication::translate("MainWindow", "Destination Account:", nullptr));
        destDrop->setItemText(0, QCoreApplication::translate("MainWindow", "Chequing", nullptr));
        destDrop->setItemText(1, QCoreApplication::translate("MainWindow", "Savings", nullptr));

        groupBox_3->setTitle(QString());
        amtLabel->setText(QCoreApplication::translate("MainWindow", "Amount:", nullptr));
        amtTextBox->setText(QCoreApplication::translate("MainWindow", "Enter Amount:", nullptr));
        transferButton->setText(QCoreApplication::translate("MainWindow", "Transfer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
