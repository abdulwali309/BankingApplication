/**
 * @authors Jimmy, Mustafa
 * @file Login.cpp
 * @brief Implementation of the Login system
 * Stores the password and hashes it for safety, stores the user name, as well as
 * account balances for hte user
 */

#include "Login.h"
#include <functional>
#include <sstream>

/**
 * @brief Construct a new Login object and load existing users
 */
Login::Login() {
    loadUsersFromFile();
}

/**
 * @brief Hash a password for secure storage
 * @param password The plaintext password
 * @return std::string The hashed password
 */
std::string Login::hashPassword(const std::string& password) {
    std::hash<std::string> hasher;
    return std::to_string(hasher(password));
}

/**
 * @brief Authenticate a user
 * @param username The username to authenticate
 * @param password The password to verify
 * @return true if authentication succeeded
 * @return false if authentication failed
 */
bool Login::authenticate(const std::string& username, const std::string& password) {
    auto it = users.find(username);
    if (it != users.end()) {
        return it->second.hashedPassword == hashPassword(password);
    }
    return false;
}

/**
 * @author Jimmy
 * @brief Register a new user
 * @param username The desired username
 * @param password The desired password
 * @return true if registration succeeded
 * @return false if username already exists
 */
bool Login::registerUser(const std::string& username, const std::string& password) {
    if (users.find(username) != users.end()) return false;
    
    users.emplace(username, UserData(hashPassword(password)));
    saveUsersToFile();
    return true;
}

/**
 * @author Jimmy
 * @brief Get user data for a specific username
 * @param username The username to look up
 * @return UserData& Reference to the user's data
 */
Login::UserData& Login::getUserData(const std::string& username) {
    return users.at(username);
}

/**
 * @authors Jimmy, Mustafa
 * @brief Save all user data to file
 */
void Login::saveUsersToFile() {
    std::ofstream file("users.txt");
    for (const auto& userPair : users) {
        const auto& username = userPair.first;
        const auto& data = userPair.second;
        file << username << " "
             << data.hashedPassword << " "
             << data.checkingAccount.getBalance() << " "
             << data.savingsAccount.getBalance() << "\n";
    }
}

/**
 * @brief Load all user data from file
 * @authors Jimmy, Mustafa
 */
void Login::loadUsersFromFile() {
    std::ifstream file("users.txt");
    std::string line;
    
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string username, hashedPwd;
        double checking, savings;
        
        if (iss >> username >> hashedPwd >> checking >> savings) {
            UserData data(hashedPwd);  // Uses constructor that sets default balances
            data.checkingAccount.setBalance(checking);
            data.savingsAccount.setBalance(savings);
            users[username] = data;
        }
    }
}