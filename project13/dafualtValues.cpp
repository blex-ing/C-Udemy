#include <iostream>
#include <string>
using namespace std;

double  calc_cost(double base_cost = 100.0, double tax_rate = 0.06, double shipping = 3.50);
int main ()
{
    double  cost {0};

    cost = calc_cost(100.0, 0.08, 4.25);
    cout << fixed ;//<< setprecision(2);
    cout << "The total cost is: $" << cost << endl;

    cost = calc_cost(100.0, 0.08);
    cout << "The total cost without shipping and taxes is: $" << cost << endl;

    cost = calc_cost(200.0);
    cout << "The total cost with default values for tax rate and shipping is: $" << cost << endl;

    cost = calc_cost();
    cout << "The total cost with all defaults (base cost of 100.0) is: $" << cost << endl;


}

double  calc_cost(double base_cost, double tax_rate, double shipping)
{
    return (base_cost += (base_cost * tax_rate) + shipping);
}