/**
 * @authors Jimmy, Mustafa
 * @file Login.h
 * @brief Header file for the Login system
 * 
 */

#ifndef LOGIN_H
#define LOGIN_H

#include <string>
#include <unordered_map>
#include <fstream>
#include "Account.h"
#include "Budget.h"

/**
 * @class Login
 * @brief Handles user authentication and account management
 * 
 * This class manages user login, registration, and persists user data
 * to a file. It uses password hashing for security.
 */
class Login {
public:
    /**
     * @struct UserData
     * @brief Contains all data for a registered user
     */
    struct UserData {
        std::string hashedPassword;  ///< Hashed password for security
        Account checkingAccount;     ///< User's checking account
        Account savingsAccount;      ///< User's savings account
        Budget userBudget;           ///< User's budget information
        
        /**
         * @brief Default constructor with default balances
         */
        UserData() : checkingAccount("Checking", 1000.0), savingsAccount("Savings", 2500.0) {}
        
        /**
         * @brief Constructor with password initialization
         * @param pwd The user's password (will be hashed)
         */
        UserData(const std::string& pwd) 
            : hashedPassword(pwd), checkingAccount("Checking", 1000.0), savingsAccount("Savings", 2500.0) {}
    };
    
    Login(); ///< Constructor to load existing users
    
    bool authenticate(const std::string& inputUsername, const std::string& inputPassword);
    bool registerUser(const std::string& username, const std::string& password);
    void saveUsersToFile(); ///< Save users to a file
    void loadUsersFromFile(); ///< Load users from a file
    UserData& getUserData(const std::string& username);

private:
    std::string hashPassword(const std::string& password); ///< Hash function for passwords
    std::unordered_map<std::string, UserData> users; ///< Map of username to user data
};

#endif