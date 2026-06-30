#include <iostream>
#include <iomanip>
using namespace std;
namespace before{
int a2 = 50;
int b2= 30;
}
namespace after{
int a2 = 30;
int b2 = 50;
}
int main (){
// Excercise 1
 float pi = 3.14f;
 float r;
 
 cout << "Enter radius of the circle ";
 cin >> r ;
 float C = 2*pi*r;
 cout << "The circumference is " << C << endl;
 float A = pi*r*r;
 cout << "The area is " << A << endl;

 // Excercise 2
 //solution 1
 int a2 =50 , b2 =30;
 cout << "Before swapping the value is:  a = " << before::a2 << " b = " << before::b2 << endl;
 cout << "After swapping the value is:  a = " << after::a2 << " b = " << after::b2 << endl;
 
 //solution 2 using
 int temp;
 temp = a2;
 a2 = b2;
 cout << "Before swapping the value is:  a = " << a2 << " b = " << b2 << endl;
 cout << "After swapping the value is:  a = " << a2 << " b = " << b2 << endl;
 
 // Excercise 3
 int a = 10;
 int b = 4;
 int c = 3;
 float x= 2.5f;
 float y= 1.5f;
 float first = a + b *c;
 float second = (a + b) *c;
 float third = a/b;
 float fourth = a % b;
 float fifth = x + y * c;
 float sixth = (x + y) / c;
 int seventh = a + (int)x % b;
 float eighth = x/ y + a - c * b;

 cout << "1. a + b * c = " << first << endl;
 cout << "2. (a + b) *c = " << second << endl;
 cout << "3. a/b = " << third << endl;
 cout << "4. a % b = " << fourth << endl;
 cout << "5. x + y * c = " << fifth << endl;
 cout << "6. (x + y) / c = " << sixth << endl;
 cout << "7. a + (int)x % b = " << seventh << endl;
 cout << "8. x/ y + a - c * b = " << eighth << setprecision(9)<< endl;
  





  return 0;
}