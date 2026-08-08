#include <iostream>
#include <string>
using namespace std;

int main (){

    double tempurature,heartrate,oxygen_level;
    int age, pain_level,unc_status;

   cout << "Please enter pain level :";
   cin >> pain_level; 

   cout << "Please enter tempurature :";
   cin >> tempurature; 
    
   cout << "Please enter heart rate :";
   cin >> heartrate; 
    
   cout << "Please enter oxygen level :";
   cin >> oxygen_level; 
    
   cout << "Please enter age :";
   cin >> age; 
    
   cout << "Please enter unconscious status :";
   cin >> unc_status; 

   if (unc_status < 90 || oxygen_level <90 || heartrate > 130){
     cout << "Patient Priority : Critical" << endl;
   }

   else if( oxygen_level>90 && oxygen_level<94 || 110< heartrate <130 || pain_level >=8){
    cout << "Patient Priority : High" << endl;
   }
   else if( 38< tempurature < 39.9 || 5< pain_level <7 ){
       cout << "Patient Priority : Medium" << endl;
   }
   else if(age >=65 && oxygen_level>90 && oxygen_level<94 || heartrate >110 && heartrate <130 || pain_level >=8){

    cout << "Special Note : Urgen Elderly Case" << endl;
    }
   
   else {
    cout << "Low" << endl;
   }
    


   
    return 0;
}