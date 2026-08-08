//today we are going to learn how to convert the tempurature.

//you can find my coding files on github @centellalearnshowtocode

#include <iostream>
using namespace std;

int main (){
    double temp;
    char unit;

    cout << "=======Tempurature conversion========= "<< endl;
    cout << "F is fahrenheit \n";
    cout << "C is Celcius \n";
    cout << "Enter what unit you wanna convert to \n";
    cin  >> unit;

    if(unit == 'F' || unit == 'f'){
        cout << "Enter the tempurature in Celcius ";
        cin >> temp;

        temp = (1.8*temp) + 32.0;

        cout << "The tempurature is " << temp << "F\n";

    }
    else if(unit == 'C' || unit == 'c'){
        cout << "Enter the tempurature in Fahrenheit ";
        cin >> temp;

        temp = (temp - 32) * 5.0 / 9.0;

        cout << "The tempurature is " << temp << "C\n";
    }
    else{
        cout << "DID YOU EVEN READ?? \n I SAID F OR C\n";
    }

    cout << "====================================== "<< endl;

    return 0;
}