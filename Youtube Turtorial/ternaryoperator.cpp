/*Today we are learning about ternary operator
ternary operator:  is a one-line if-else statement. 
it is usedto pick betweem 2 chioces.

it goes lik this: conditon? Value if : Value if false.

*/

#include <iostream>
using namespace std;
int main (){

    /*
    int number;
    
    cout << "Please enter any number: ";
    cin >> number;
    number % 2 ==1 ? 
    cout << "It is an odd number":
    cout << "It is an even number";
    */

   bool hungry;
   cout << "Please enter true for yes and false for no ";
   cin >> hungry;
   hungry == 1 ? 
   cout << "I am hungry": cout << "I am not hungry";
   
   return 0;
}