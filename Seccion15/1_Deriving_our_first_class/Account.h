#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
class Account {
// private:
//     double balance;
public:
    double balance;
    std::string name;
    void deposit(double amount);
    void withdraw(double amount);
    Account();
    ~Account();
};

#endif // ACCOUNT_H
