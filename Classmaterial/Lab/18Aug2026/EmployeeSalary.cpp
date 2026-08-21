#include <iostream>
using namespace std;
double calculateSalary(double hoursWorked, double hourlyRate){
    return hoursWorked*hourlyRate;
}
int main (){
    double hours, rate;

    cout << "Enter Hours Worked: ";
    cin >> hours;
    cout << "Enter hourly rate : ";
    cin >> rate;

    cout << "Salary = " << "$"<< calculateSalary(hours,rate) << endl;
    

    return 0;
}