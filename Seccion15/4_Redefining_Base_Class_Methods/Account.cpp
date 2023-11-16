#include <iostream>
#include "Account.h"

using namespace std;

// Constructors
Account::Account() : Account{0.0}
{
}

//Constructor with arguments
Account::Account(double balance) : balance{balance}
{
}

// Destructor
Account::~Account() {
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
void Account::deposit(double amount) {
    balance += amount;
    cout << "Account::deposit called " << amount << endl;

}

void Account::withdraw(double amount) {
    cout << "Account::withdraw called " << amount << endl;
    if (balance - amount >= 0) {
        balance -= amount;
    } else {
        std::cout << "Insufficient funds." << std::endl;
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
    os << "Account balance: " << account.balance;
    return os;
}
