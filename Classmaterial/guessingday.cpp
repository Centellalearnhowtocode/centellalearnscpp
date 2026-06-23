#include <iostream>
#include <iomanip>
#include <ctime>
#include <chrono>
using namespace std;
int main(){
  
  string day;
  cout <<"Enter today's day:";
  cin >> day;
  cout <<"Today is "<< day <<"."<<endl;
  
  if(day == "Monday"){
    cout <<"Tomorrow is Tuesday."<<endl;
  }
  else if(day == "Tuesday"){
    cout <<"Tomorrow is Wednesday."<<endl;
  }
  else if(day == "Wednesday"){
    cout <<"Tomorrow is Thursday."<<endl;
  }
  else if(day == "Thursday"){
    cout <<"Tomorrow is Friday."<<endl;
  }
  else if(day == "Friday"){
  cout <<"Tomorrow is Saturday."<<endl;
  }
  else if(day == "Saturday"){
    cout <<"Tomorrow is Sunday."<<endl;
  }
  else if(day == "Sunday"){
    cout <<"Tomorrow is Monday."<<endl;
  }
  else{
    cout <<"Invalid input. Please enter a valid day of the week."<<endl;
  }
  return 0;
}