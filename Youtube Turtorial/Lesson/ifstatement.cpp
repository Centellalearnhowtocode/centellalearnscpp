#include <iostream>
using namespace std;
int main(){

    int age;

    cout << "Enter your age ";
    cin >> age;

    if(age >= 100){
        cout << "You're a vampire????" << endl;
    }
    else if(age >= 18){
        cout <<  "Welcome to the site!";
    }
    else if(age < 0){
        cout << "You haven't been born yet. tf" <<endl;
    }
    else{
        cout << "You are not old enough!"<<endl;
    }

}