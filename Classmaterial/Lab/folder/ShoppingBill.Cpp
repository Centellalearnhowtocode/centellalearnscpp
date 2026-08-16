#include <iostream>
using namespace std;

int main() {
    double price;
    int itemCount = 0;
    double total = 0.0;
    double discount = 0.0;
    double amountToPay;

    cout << "Enter Item Price (0 to Finish): ";
    cin >> price;

    while (price != 0) {
        total += price;
        itemCount++;

        cout << "Enter Item Price (0 to Finish): ";
        cin >> price;
    }

    if (total > 50) {
        discount = total * 0.10;
    }

    amountToPay = total - discount;

    cout << "\nItems Purchased: " << itemCount << "\n";
    cout << "Total Bill: $" << total << "\n";
    cout << "Discount: $" << discount << "\n";
    cout << "Amount to Pay: $" << amountToPay << endl;

    return 0;
}