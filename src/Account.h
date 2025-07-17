/**
 * @file Account.h
 * @brief Header file for the Account class which represents a bank account
 * @authors Jimmy, Mustafa, Bilal
 */

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

/**
 * @class Account
 * @brief Represents a bank account with basic operations
 * 
 * This class provides functionality to manage a bank account including
 * checking balance, updating balance, and making deposits.
 */
class Account {
private:
    std::string accountType; ///< Type of account (Checking/Savings)
    double balance;          ///< Current account balance

public:
    /**
     * @brief Construct a new Account object
     * @param type The type of account (Checking/Savings)
     * @param initialBalance The initial balance for the account
     */
    Account(std::string type, double initialBalance);
    
    /**
     * @brief Get the current account balance
     * @return double The current balance
     */
    double getBalance() const;
    
    /**
     * @brief Update the account balance to a new value
     * @param amount The new balance amount
     */
    void updateBalance(double amount);
    
    /**
     * @brief Add to the current account balance
     * @param amount The amount to add to the balance
     */
    void incrementBalance(double amount);
    
    /**
     * @brief Set the account balance to a specific value
     * @param newBalance The new balance value to set
     */
    void setBalance(double newBalance) { balance = newBalance; }

    std::string getAccountType() const {return accountType; }
};

#endif