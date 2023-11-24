#include "../include/bank.h"
#include "../include/Account.h"

Bank::Bank() {}

void Bank::createAccount(std::string accountName) {
    Account newAccount(accountName);
    accounts.push_back(newAccount);
}

Account& Bank::getAccount(std::string accountName) {
    for (Account& account : accounts) {
        if (account.getName() == accountName) {
            return account;
        }
    }
    throw "Account not found";
}

void Bank::deposit(std::string accountName, double amount) {
    Account& account = getAccount(accountName);
    account.deposit(amount);
}

void Bank::withdraw(std::string accountName, double amount) {
    Account& account = getAccount(accountName);
    account.withdraw(amount);
}

double Bank::getBalance(std::string accountName) {
    Account& account = getAccount(accountName);
    return account.getBalance();
}