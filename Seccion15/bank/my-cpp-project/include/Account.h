#ifndef ACCOUNT_H
#define ACCOUNT_H

// Base class
class Account {
public:
    Account(double balance);
    virtual void deposit(double amount);
    virtual void withdraw(double amount);
    double getBalance() const;
protected:
    double balance;
};

#endif // ACCOUNT_H
