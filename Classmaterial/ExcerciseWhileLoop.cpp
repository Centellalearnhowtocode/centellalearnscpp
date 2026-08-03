#include <iostream>
#include <cmath>
using namespace std;
int main (){
    //Excercise 1
int i = 1;
do {
    cout << "5 x " << i << " = " << 5 * i << endl;
    i = i+ 1;
}
while (i <= 10);

  //Excercise 2
    int a = 2;
    do {
    cout << " " << endl;
    cout << "2 x 2 x 2 x 2 x 2 x 2 = " << pow(a, 6) << endl;
    a += a;
    }
    while (a <=2);
    return 0;
}