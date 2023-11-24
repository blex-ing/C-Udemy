#include "../include/bank.h"

int main() {
    // Create an object of the Bank class
    Bank myBank;

    // Call some methods on the Bank object
    myBank.deposit(1000);
    myBank.withdraw(500);

    // Print the current balance
    std::cout << "Current balance: " << myBank.getBalance() << std::endl;

    return 0;
}