#include <iostream>
#include <ctime>
using namespace std;
int main (){
    char op;
    double num1;
    double num2;
    double result;

    cout <<"==========CACULATOR==========\n";
    cout <<"Please enter (+ - * /): ";
    cin >> op;

    cout << "Enter #1:";
    cin >> num1;
    

    cout << "Enter #2:";
    cin >> num2;

    switch (op)
    {
         default:
    cout << "Please only enter (- + * /) \n";
        break;
    case '+':
        result = num1 + num2;
        cout << num1 << " + "<< num2 << " =" << result <<endl ;
        break;
    case '-':
        result = num1 - num2;
        cout << num1 << " - "<< num2 << " =" << result <<endl ;
        
        break;
    case '*':
        result = num1 * num2;
        cout << num1 << " * "<< num2 << " =" << result <<endl;
        
        break;
    case '/':
        result = num1 / num2;
        cout << num1 << " / "<< num2 << " =" << result <<endl;
        
        break;
    }

    return 0;
} 