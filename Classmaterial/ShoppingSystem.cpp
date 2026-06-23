#include <iostream>
#include <string>
using namespace std;

int main (){
//Excercise 2
string item,item2,item3;
int accountnum,accountnum2,accountnum3;
int qty,qty2,qty3;
double unitprice,unitprice2,unitprice3;

cout << "Enter Item 1        :  " ;
cin >> item ;
cout << "Quantity            :  " ;
cin >> qty ; 
cout << "Enter Unit          :  " ;
cin >> unitprice ;   

cout << "\nEnter Item 2        :  " ;
cin >> item2 ;
cout << "Quantity            :  " ;
cin >> qty2 ; 
cout << "Enter Unit          :  " ;
cin >> unitprice2 ;   

cout << "\nEnter Item 3        :  " ;
cin >> item3 ;
cout << "Quantity            :  " ;
cin >> qty3 ; 
cout << "Enter Unit          :  " ;
cin >> unitprice3 ;   

double total = qty * unitprice;
double total2 = qty2 * unitprice2;
double total3 = qty3 * unitprice3;

cout << "========SUPER MARKET RECEIEPT==========="<<endl;
cout << "\nItem 1    : " << item <<endl;
cout << "Quantity  : " << qty <<endl;
cout << "Unit Price: $" << unitprice <<endl;
cout << "Total     : $" << total <<endl;

cout << "\nItem 2    : " << item2 <<endl;
cout << "Quantity  : " << qty2 <<endl;
cout << "Unit Price: $" << unitprice2 <<endl;
cout << "Total     : $" << total2 <<endl;

cout << "\nItem 3    : " << item3 <<endl;
cout << "Quantity  : " << qty3 <<endl;
cout << "Unit Price: $" << unitprice3 <<endl;
cout << "Total     : $" << total3 <<endl;

double subtotal = total + total2 + total3;
double tax = subtotal * 0.08;
double discount;
 if(subtotal >= 200){
    double discount = subtotal * 1.5;
  }
  else {
    double discount = 0;
  }

  cout <<"\n----------------------------"<<endl;
  cout <<"Subtotal : $" << subtotal <<endl;
  cout << "Tax (8%): $" << tax << endl;
  cout << "Discount: $" << tax << endl;
  cout <<"\n----------------------------"<<endl;
  double finalbill = subtotal + tax - discount;
  cout <<"Final Bill: $" << finalbill <<endl;
  cout <<"\n============================"<<endl;
  return 0;
}