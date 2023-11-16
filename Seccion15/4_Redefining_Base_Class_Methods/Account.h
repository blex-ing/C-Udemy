#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
using namespace std;
class Account {
    friend ostream &operator<<(ostream &os, const Account &account);
protected:
    double balance;
public:
    void deposit(double amount);
    void withdraw(double amount);
    Account();
    Account(double balance);
    ~Account();
};

#endif // ACCOUNT_H
