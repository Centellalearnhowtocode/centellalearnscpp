#include <iostream>
#include <cmath>
using namespace std;
int main (){

    int total = 0;
    int item = 0;
    double price = 0.0;
    double discount = 0.0;
    double subtotalpayment =0.0;
    double totalpayment =0.0;
    double tax = subtotalpayment * 0.10;
    char next = 'N';

while (next == 'n' || next == 'N'){

    do {
        cout << "Please enter amount of items :";
        cin >> item;
        cout << "Please enter price of items :";
        cin >> price;
        subtotalpayment = item * price;
        totalpayment = subtotalpayment - discount + tax;
        if (subtotalpayment >= 50){
            discount = subtotalpayment * 0.05;
            totalpayment = subtotalpayment - discount;
            cout << "Your total payment is $" << totalpayment << "." << endl;
        }
        else if (subtotalpayment >= 100) {
            discount = subtotalpayment * 0.1;
            totalpayment = subtotalpayment - discount;  
            cout << "Your total payment is $" << totalpayment << "." << endl;
        }
        else if (subtotalpayment >= 200){
            discount = subtotalpayment * 0.15;
            cout << "Your total payment is $" << totalpayment << "." << endl;
        }
        else {
            discount =0;
        }

          cout << "\n----- RECEIPT -----" << endl;
        cout << "Items:        " << item << endl;
        cout << "Price/item:   $" << price << endl;
        cout << "Subtotal:     $" << subtotalpayment << endl;
        cout << "Discount:     -$" << discount << endl;
        cout << "Tax (10%):    +$" << tax << endl;
        cout << "Total:        $" << totalpayment << endl;
        cout << "--------------------\n" << endl;
        
        cout << "Enter N for next customer, any other key to quit: ";
        cin >> next;
    } while (item <= 0 || price <= 0);
}


    return 0;
}