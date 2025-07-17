/**
 * @file Transaction.cpp
 * @brief Implementation of the Transaction class
 * 
 */

#include "Transaction.h"

/**
 * @brief Transfer money between accounts
 * @param source The source account to transfer from
 * @param destination The destination account to transfer to
 * @param amount The amount to transfer
 * @return true if transfer was successful
 * @return false if transfer failed (insufficient funds)
 */
bool Transaction::transfer(Account& source, Account& destination, double amount) {
    if (source.getBalance() >= amount) {
        source.updateBalance(-amount);
        destination.updateBalance(amount);
        return true;
    }
    return false;
}