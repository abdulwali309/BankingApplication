/**
 * @file Transaction.h
 * @brief Header file for the Transaction class
 * 
 */

#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "Account.h"

/**
 * @class Transaction
 * @brief Handles financial transactions between accounts
 */
class Transaction {
public:
    /**
     * @brief Transfer money between accounts
     * @param source The source account to transfer from
     * @param destination The destination account to transfer to
     * @param amount The amount to transfer
     * @return true if transfer was successful
     * @return false if transfer failed (insufficient funds)
     */
    static bool transfer(Account& source, Account& destination, double amount);
};

#endif