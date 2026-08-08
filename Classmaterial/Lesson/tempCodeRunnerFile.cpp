#include <iostream>
using namespace std;
int main (){

int choice;
int totalslot =20;
int occslot =0;
int available = totalslot - occslot;
int extrahour = 0;
double totalincome = 0.0;
int enterhour = 0;
int exithour = 0;
int parkinghour= exithour - enterhour;
double totalpayment = 0.0;


cout << "Smart Parking System" << endl;
cout << "1. Car enters          :" << endl;
cout << "2. Car exists and pays :" << endl;
cout << "3. Show Available Slots:" << endl;
cout << "4. Show total income   :" << endl;
cout << "Select menu :"; 
cin>> choice;
do {
if (choice ==1){
    cout << "Please wait for while we're checking your slot availability" << endl;
    cin >> occslot;
    if (occslot < totalslot){
        occslot++; 
        cout << "Your slot is available. You can park your car." << endl;
    }
    else {
        cout << "Sorry, all slots are occupied. Please wait for a slot to become available." << endl;
    }

}
else if (choice ==2){
    cout << "Please enter the hour you entered: ";
    cin >> enterhour;
    cout << "Please enter the hour you exited : ";
    cin >> exithour;
   if (exithour < 23 && exithour > 0 && enterhour < 23 && enterhour > 0) {
    } else {
        cout << "Invalid hours entered." << endl;
    }
    cout << "Please wait for while we're calculating your payment" << endl;
    if (parkinghour <=2){
        totalpayment = 2.00;
         cout << "Your parking fee is $" << totalpayment << "." << endl;
    }
    else if (parkinghour >2){
        totalpayment = 2.00 + (parkinghour - 2) * 1.05;
        cout << "Your parking fee is $" << totalpayment << "." << endl;
    }
}
else if (choice ==3){
if (available > 0){
    cout << "There are " << available << " slots available." << endl;
}
else {
    cout << "Sorry, all slots are occupied." << endl;
}
else if (choice ==4){
if(totalincome > 0){
    cout << "The total income is $" << totalincome << "." << endl;
}
else if (totalincome == 0){
    cout << "No income has been generated yet." << endl;    
}
else {
    cout << "Invalid choice. Please select a valid option." << endl;
}
}

while (choice < 1 || choice > 4);



return 0;
}}