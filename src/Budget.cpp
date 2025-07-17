/**
 * @file Budget.cpp
 * @brief Implementation of the Budget class
 * @author Jimmy
 */

#include "Budget.h"

/**
 * @brief Set the monthly income and calculate 50/30/20 allocations
 * @param income The monthly after-tax income
 */
void Budget::setIncome(double income) {
    monthlyIncome = income;
    calculate503020();
}

/**
 * @brief Calculate the 50/30/20 budget allocations
 */
void Budget::calculate503020() {
    necessities = monthlyIncome * 0.5;
    wants = monthlyIncome * 0.3;
    savings = monthlyIncome * 0.2;
}

/**
 * @brief Set a custom budget category
 * @param category The name of the category
 * @param amount The budgeted amount for this category
 */
void Budget::setCustomBudget(const std::string& category, double amount) {
    customCategories[category] = amount;
}

// Getters implementation
double Budget::getIncome() const {
    return monthlyIncome;
}

double Budget::getNecessities() const {
    return necessities;
}

double Budget::getWants() const {
    return wants;
}

double Budget::getSavings() const {
    return savings;
}

const std::map<std::string, double>& Budget::getCustomCategories() const {
    return customCategories;
}