#include <iostream>
#include <cmath>
using namespace std;  
int main (){
    int i = 2;
    do {
    cout << "2 x 2 x 2 x 2 x 2 x 2 = " << pow(i, 6) << endl;
    i += i;
    }
    while (i <=2);
    return 0;
}