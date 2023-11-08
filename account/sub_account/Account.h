#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>

// using namespace std;
class Account
{
private:
    // attributes
    std::string name;
    double balance;
public:
    // Account(std::string n = "Unnamed Account", double balance = 0.0);
    // ~Account();
    // methods
    /**
     * @brief Sets the balance of the account to the specified value.
     * 
     * @param bal The new balance to set for the account.
     */
    void set_balance(double bal) {balance = bal;}
    /**
     * Returns the current balance of the account.
     * @return The current balance of the account.
     */
    double get_balance() { return balance;}

    // methods declared outside the class declaration
    void set_name(std::string n);
    std::string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
};

#endif // _ACCOUNT_H_