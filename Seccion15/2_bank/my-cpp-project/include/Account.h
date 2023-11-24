#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
public:
    Account(); // Constructor
    ~Account(); // Destructor

    void deposit(double amount); // Method to deposit money into the account
    void withdraw(double amount); // Method to withdraw money from the account
    double getBalance() const; // Method to get the current balance of the account

private:
    double balance; // Property to store the current balance of the account
};

#endif // ACCOUNT_H