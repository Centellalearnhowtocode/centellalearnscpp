#include <iostream>
using namespace std;
int main (){

   double balance = 1000;
   double withdraw;
   char choice = 'Y';
   
   
   do
   {
   cout << "=========ATM Withdrawal System========= \n";
   cout << "Current Balance \t\t\t: $1000 \n";
   cout <<"Please enter the withdrawal amount\t: $";
   cin >> withdraw;
   while(withdraw>balance)
   {
      cout << "You have insufñficient balance. \n"; 
      cin >> withdraw;
   }
   balance = balance - withdraw;
   cout << "Your remaining balance is \t\t:$" << balance ;

   cout << "Do you wanna continure? (Y/N): ";
   cin >> choice;
   cout << "\n";
   }
   while (choice == 'Y' || choice == 'y');
   cout << "\n===========end of the session===========" << endl;
   return 0;
}