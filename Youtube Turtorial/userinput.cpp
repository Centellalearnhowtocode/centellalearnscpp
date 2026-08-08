#include <iostream>
using namespace std;
int main (){


    // cout << (insertion operator)
    // cin >> (extraction operator)
    string name;
    int age;
    cout << "How old are you?"<<endl;
    cin >> age ;
    cout << "What's your name?"<<endl;
    getline(cin >>ws,name); //any string with spaces
    cout << "Hello " << name << endl;
    cout << "You are " << age << endl;
    

    return 0;
}