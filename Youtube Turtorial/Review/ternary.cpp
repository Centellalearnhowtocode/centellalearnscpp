#include <iostream>
using namespace std; 
int main() {
    int grade;
    cout << "Please enter your grade: \n";
    cin >> grade;
    if (grade >= 99) {
        cout << "You are god. \n";
    } 
    else if (grade >= 90) {
        cout << "You passed and you did amazing. \n";
    } 
    else if (grade >= 80) {
        cout << "You passed and you did a great job. \n";
    } 
    else if (grade >= 70) {
        cout << "You passed and did well \n";
    } 
    else if (grade >= 60) {
        cout << "You passed. \n";
    } 
    else {
        cout << "You almost passed.\n";
    }

    return 0; 
}
