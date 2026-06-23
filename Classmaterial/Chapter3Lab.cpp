#include <iostream>
#include <string>
using namespace std;

int main (){
  //Excercise 1
  string costumername;
  int accountnumber;
  double initial_balance;
  double deposit;
  double withdrawamount;
  
  
  
  cout << "Enter Customer Name :  " ;
  cin >> costumername ;
  cout << "Enter Account Number:  " ;
  cin >> accountnumber ; 
  cout << "Ente initial balance:  " ;
  cin >> initial_balance ; 
  cout << "Enter Deposit Amount:  " ;
  cin >> deposit ; 
  cout << "Enter Withdraw Amount: " ;
  cin >> withdrawamount ;  
  
  double currentbalance = initial_balance + deposit - withdrawamount;
  double interest = currentbalance * 0.03;
  double finalbalance = currentbalance + interest;

  cout << "==== Bank Account Report ===="<< endl;
  cout << "\tCostumer Name : " << costumername << endl;
  cout << "\tAcount Number : " << accountnumber << endl;
  
  
  cout << "\n------------------------------" << endl;
  cout << "\n\tInitial Blance : $" << initial_balance << endl;
  cout << "\tDeposit Amount   : $" << deposit << endl;
  cout << "\tWithdraw         : $" << withdrawamount << endl;
  
  cout << "\n------------------------------" << endl;
  cout << "\n\tInterest       : %" << interest << endl;
  
  cout << "\n------------------------------" << endl;
  cout << "\tFinal Balance    : $" << finalbalance << endl; 
  cout << "===============================" << endl;
  

  return 0;
}