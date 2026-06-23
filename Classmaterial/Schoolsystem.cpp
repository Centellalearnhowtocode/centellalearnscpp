#include <iostream>
#include <string>
using namespace std;

int main (){
//Excercise 3
string studentname;
double sub1,sub2,sub3,sub4,sub5;

cout << "Enter Student Name:" ;
cin >> studentname ;
cout << "Enter score:"<< endl;
cout << "Subject 1:";
cin >> sub1;
cout << "Subject 2:";
cin >> sub2;
cout << "Subject 3:";
cin >> sub3;
cout << "Subject 4:";
cin >> sub4;
cout << "Subject 5:";
cin >> sub5;

cout << "==========STUDENT PERFFORMANCE REPORT==========\n"<< endl;
cout << "Student Name: " << studentname << "\n"<< endl;
cout << "Scores      : " << studentname << endl;
cout << "Subject 1   : " << sub1 << endl;
cout << "Subject 2   : " << sub2 << endl;
cout << "Subject 3   : " << sub3 << endl;
cout << "Subject 4   : " << sub4 << endl;
cout << "Subject 5   : " << sub5 <<"\n"<< endl;

double total = sub1 + sub2 + sub3 + sub4 + sub5;
double avg = total/5;
cout << "-----------------------------------------" << endl;
cout << "Total Score   :" << total << endl; 
cout << "Average Score :" << avg << endl; 


double bonus;
if(total >= 70){
    double bonus = +5;
  }
  else {
    double bonus = 0;
  }

double finalavg = avg + bonus;
string performance;
if (finalavg >= 90) {
    performance = "Excellent";
} 
else if (finalavg >= 80) {
    performance = "Good";
} 
else if (finalavg >= 70) {
    performance = "Average";
} else if (finalavg >= 60) {
    performance = "Poor";
} else {
    performance = "Fail";
}
string bonusapp; 
if (performance == "Excellent") {
    bonusapp = "Yes";
}
else if (performance == "Good") {
    bonusapp = "Yes";
}
else {
    bonusapp = "No"; 
}
cout << "Bonus Applied : " << bonusapp << endl;
cout << "Final Average : " << finalavg << endl;
cout << "Performance   : " << performance << endl;
cout << "=====================================" << endl;

 
  return 0;
}