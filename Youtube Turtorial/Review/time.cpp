#include <iostream>
#include <ctime>
using namespace std;
int main(){
time_t now = time(nullptr);
tm* localTime = localtime(&now);

int year = localTime->tm_year + 1900;
int month = localTime->tm_mon + 1;

cout << year <<endl;
cout << month <<endl;

return 0;
}