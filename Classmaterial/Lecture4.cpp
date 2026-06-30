/*Value and variable Datatatype*/
#include <iostream>
#include <string>

using namespace std;
int main (){
  int age = 20;
  float height = 163.5f;
  double weight = 42;
  char grade = 'A';
  bool isPassed  = true;

  //Display data section

  // Sizeof check the size of the basic data type
  cout << "Age :" << age << " " << sizeof(age) << " Bytes" <<endl;
  cout << "Height :" << height << " cm"<<endl;
  cout << "Weight :" << weight <<" kg" <<endl;
  cout << "Grade :" << grade <<endl;
 
  //boolean
  cout << isPassed <<endl;
 //void main doesn't need return 0;

//Operands
 float a,b,c;
 float result = a+b;
 cout << "enter a value" << endl;
 cin >> a;
 cout << "enter a value" << endl;
 cin >> b;
 cout << "enter a value" << endl;
 cout << "the result is " << result << endl;

  return 0;
}