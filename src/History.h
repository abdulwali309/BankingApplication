/**
 * @author Bilal
 * @file History.h
 * @brief Header file for the History class which manages transaction records
 */

#ifndef HISTORY_H
#define HISTORY_H

#include <vector>
#include <string>

/**
 * @struct TransactionRecord
 * @brief stores a transaction record
 */
struct TransactionRecord {
    std::string sourceAccount;
    std::string destinationAccount;
    double amount;
    double balanceAfterTransaction;
    std::string timestamp;
};

/**
 * @class History
 * @brief Manages a history of transactions
 * 
 * This class provides functionality to add and retrieve transaction records.
 */
class History {
    public:
        void addTransaction(const TransactionRecord& record);
        const std::vector<TransactionRecord>& getTransactionHistory() const;

    private:
        std::vector<TransactionRecord> transactionHistory;
};

#endif // HISTORY_H
