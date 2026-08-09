#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    bool loggedIn = false;
    int attempts = 0;

    cout << "Login Authentication System \n";

    do {
        cout << "Enter password: ";
        getline(cin, password);
        attempts++;

        if (password == "admin" || password == "guest" || password == "RUPP2026") {
            cout << "\nLogin Successful.\n";
            loggedIn = true;
        } else {
            cout << "\nIncorrect password\n";
        }
    } while (!loggedIn && attempts < 3);

    if (!loggedIn) {
        cout << "\nToo many attempts. Please wait 5 mins.\n";
    }

    return 0;
}