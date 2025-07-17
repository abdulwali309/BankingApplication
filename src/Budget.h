/**
 * @file Budget.h
 * @brief Header file for the Budget class which manages personal budgeting
 * @author Jimmy
 */

#ifndef BUDGET_H
#define BUDGET_H

#include <string>
#include <map>

/**
 * @class Budget
 * @brief Manages personal budgeting using the 50/30/20 rule
 * 
 * This class implements the 50/30/20 budgeting rule where:
 * - 50% of income goes to necessities
 * - 30% of income goes to wants
 * - 20% of income goes to savings/debt
 * It also supports custom budget categories.
 */
class Budget {
public:
    Budget() = default;
    
    /**
     * @brief Set the monthly income and calculate 50/30/20 allocations
     * @param income The monthly after-tax income
     */
    void setIncome(double income);
    
    /**
     * @brief Calculate the 50/30/20 budget allocations
     */
    void calculate503020();
    
    /**
     * @brief Set a custom budget category
     * @param category The name of the category
     * @param amount The budgeted amount for this category
     */
    void setCustomBudget(const std::string& category, double amount);
    
    // Getters
    double getIncome() const;
    double getNecessities() const;
    double getWants() const;
    double getSavings() const;
    const std::map<std::string, double>& getCustomCategories() const;
    
private:
    double monthlyIncome = 0.0;      ///< Monthly after-tax income
    double necessities = 0.0;        ///< 50% of income for necessities
    double wants = 0.0;              ///< 30% of income for wants
    double savings = 0.0;            ///< 20% of income for savings/debt
    std::map<std::string, double> customCategories; ///< Custom budget categories
};

#endif // BUDGET_H