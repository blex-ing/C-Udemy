#ifndef BANK_H
#define BANK_H
#include "Account.h"

// Derived class
class Bank : public Account {
public:
    Bank(double balance, double interestRate);
    void addInterest();
private:
    double interestRate;
};

#endif // BANK_H