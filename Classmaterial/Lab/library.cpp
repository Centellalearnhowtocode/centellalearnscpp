#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int day;
    double fineRate = 0.5;
    double fine;
    double totalCollected = 0.0;
    do {
        cout << "Enter Overdue Days (-1 to Stop): ";
        cin >> day;

        if (day != -1){
            fine = abs(day) * fineRate;
            cout << "Fine: $" << fine << "\n\n";
            totalCollected += fine;
        }
    } while (day != -1);

    cout << "Total Fines Collected: $" << totalCollected << endl;
    

    return 0;
}