#include <iostream>
#include "Account.h"

using namespace std;

// Constructors
Account::Account()  {
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
    // balance += amount;
    cout << "Account::deposit called " << amount << endl;

}

void Account::withdraw(double amount) {
    cout << "Account::withdraw called " << amount << endl;
    // if (balance - amount >= 0) {
    //     balance -= amount;
    // } else {
    //     std::cout << "Insufficient funds." << std::endl;
    // }
}
