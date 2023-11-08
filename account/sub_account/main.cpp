#include "Account.h"
#include <iostream>

int main()
{
    Account my_account;
    my_account.set_name("John Doe");
    my_account.set_balance(1000.0);

    std::cout << "Account name: " << my_account.get_name() << std::endl;
    std::cout << "Account balance: " << my_account.get_balance() << std::endl;

    if (my_account.deposit(200.0))
        std::cout << "Deposit OK" << std::endl;
    else
        std::cout << "Deposit Not allowed" << std::endl;

    if (my_account.withdraw(500.0))
        std::cout << "Withdrawal OK" << std::endl;
    else
        std::cout << "Not sufficient funds" << std::endl;

    if (my_account.withdraw(1500.0))
        std::cout << "Withdrawal OK" << std::endl;
    else
        std::cout << "Not sufficient funds" << std::endl;

    return 0;
}

