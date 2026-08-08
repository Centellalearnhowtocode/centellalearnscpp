#include <iostream>
using namespace std;

namespace first {
  int k = 3;
  int i = k + 1;
}
int main (){

 int k = 1;
 int i = k + 1;
 cout << k << endl;
 cout << i << endl; 
 cout << first::k << endl; 
 cout << first::i << endl; 

 int x1 = 10;
 int a, b;
 a = (b =5) + 2;

 int x, y, z;
 x = y = z = 15;

 int num = 10;

 //num +=5;
 //num -=3;
 //num *= 2;
 //num /=4;
 num %= 3;
 cout << num << endl;
  return 0;
}