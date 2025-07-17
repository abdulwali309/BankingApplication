/**
 * @authors Jimmy, Mustafa, Bilal
 * @file Account.cpp
 * @brief Implementation of the Account class
 * Contains getters and setters for the account class
 */

#include "Account.h"

/**
 * @brief Construct a new Account::Account object
 * @param type The type of account (Checking/Savings)
 * @param initialBalance The initial balance for the account
 */
Account::Account(std::string type, double initialBalance) 
    : accountType(type), balance(initialBalance) {}

/**
 * @brief Get the current account balance
 * @return double The current balance
 */
double Account::getBalance() const {
    return balance;
}

/**
 * @brief Update the account balance to a new value
 * @param amount The new balance amount
 */
void Account::updateBalance(double amount) {
   balance = amount;
}

/**
 * @brief Add to the current account balance
 * @param amount The amount to add to the balance
 */
void Account::incrementBalance(double amount) {
    balance += amount;
}