/**
 * @author Bilal
 * @file History.cpp
 * @brief Implementation of the History class which manages transaction records
 */

#include "History.h"
#include <iostream>

/**
 * @brief Adds a transaction record to the history
 * @param record The transaction record to add
 */
void History::addTransaction(const TransactionRecord& record) {
    transactionHistory.push_back(record);
}

/**
 * @brief Retrieves the transaction history
 */
const std::vector<TransactionRecord>& History::getTransactionHistory() const {
    return transactionHistory;
}
