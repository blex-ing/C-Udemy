#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
// private:
//     double balance;
public:
    void deposit(double amount);
    void withdraw(double amount);
    Account();
    ~Account();
};

#endif // ACCOUNT_H
