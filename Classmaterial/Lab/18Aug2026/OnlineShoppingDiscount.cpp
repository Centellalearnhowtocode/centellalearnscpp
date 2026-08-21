#include <iostream>
using namespace std;

double calculateDiscount(double amount)
{
    double discount;

    if (amount >= 100 && amount < 200)
    {
        discount = 0.1;
    }
    else if (amount >= 200 && amount < 500)
    {
        discount = 0.15;
    }
    else if (amount >= 500)
    {
        discount = 0.20;
    }
    else
    {
        discount = 0.0;
    }

    return discount;
}

int main()
{
    double amount;
    cout << "Enter purchase amount: ";
    cin >> amount;

    double discountRate = calculateDiscount(amount);
    double discount = discountRate * amount;
    double finalpayment = amount - (amount * discountRate);

    cout << "Discount Rate: " << discountRate * 100 << "%" << endl;
    cout << "Discount : " << discount<< "$" << endl;
    cout << "Final Payment : " << finalpayment << endl;

    return 0;
}