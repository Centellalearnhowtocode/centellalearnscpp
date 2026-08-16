#include <iostream>
using namespace std;

int main() {
    char attendance;
    int present = 0;
    int absent = 0;

    cout <<"========Student Attendance System========\n";
    cout << "Enter Attendance (P/A/Q): ";
    cin >> attendance;

    while (attendance != 'Q' && attendance != 'q') {

        if (attendance == 'P' || attendance == 'p') {
            present++;
        } else if (attendance == 'A' || attendance == 'a') {
            absent++;
        }

        cout << "Enter Attendance (P/A/Q): ";
        cin >> attendance;
    }

    cout << "\nPresent Students: " << present << "\n";
    cout << "Absent Students: " << absent << "\n";
    cout << "Total Students: " << (present + absent) << "\n";

    return 0;
}