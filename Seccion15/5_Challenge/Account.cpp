#include <iostream>
#include "Account.h"

using namespace std;

//Constructor with arguments
Account::Account(string name, double balance) :  name{name}, balance{balance}
{
}

// // Getters
// std::string Account::getName() const {
//     return name;
// }

// double Account::getBalance() const {
//     return balance;
// }

// // Setters
// void Account::setName(std::string name) {
//     this->name = name;
// }

// void Account::setBalance(double balance) {
//     this->balance = balance;
// }

// Other member functions
bool Account::deposit(double amount) {
    if (amount < 0 )
        return false;
    else
    {
        balance += amount;
        cout << "Account::deposit called " << amount << endl;
        return true;
    }
}

bool Account::withdraw(double amount) {
    cout << "Account::withdraw called " << amount << endl;
    if (balance - amount >= 0) {
        balance -= amount;
        return true;
    } else {
        std::cout << "Insufficient funds." << std::endl;
        return false;
    }
}

/**
 * Overloads the << operator to print the account balance.
 * @param os The output stream to print to.
 * @param account The account to print the balance of.
 * @return The output stream with the account balance printed to it.
 */
ostream &operator<<(ostream &os, const Account &account) 
{
    os << "[Account: "<<account.name<<" balance: " << account.balance << "]";
    return os;
}
