#include "../include/bank.h"
#include "../include/Account.h"
#include <iostream>

using namespace std;

int main() {
    // Create a new bank
    Bank myBank;

    // Create a new account
    Account myAccount;

    // Add the account to the bank
    myBank.addAccount(myAccount);

    // Deposit some money into the account
    myAccount.deposit(1000);

    // Withdraw some money from the account
    myAccount.withdraw(500);

    // Print the current balance
    cout << "Current balance: " << myAccount.getBalance() << endl;

    return 0;
}