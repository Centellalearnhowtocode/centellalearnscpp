#include <iostream>
using namespace std;
int main (){
//Excercise 1
  double celcius;
  cout <<"Enter a degree in Celcius ";
  cin >> celcius ;
  double fahrenheit = (9.0/5)*celcius + 32;
  cout << celcius << " is " << fahrenheit << " Fahrenheit" << endl;
//Excercise 2
double radius;
double length;
cout << "Enter the radius and length of the cylinder ";
cin >> radius >> length ; 
double pi = 3.14;
double area = radius * radius * pi;
cout << "The area is " << area << endl;
double volume = area * length;
cout << "The volume is " << volume << endl;


//Excercise 3
double feet;
cout << "Enter the value for feet ";
cin >> feet;
double meters = feet* 0.305;
cout << feet << "is " << meters << " meters" << endl;
  return 0;
}