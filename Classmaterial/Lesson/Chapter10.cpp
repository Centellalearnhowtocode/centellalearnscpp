#include <iostream>
#include <random>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
int sum(int il, int i2){
    int sum =0;
    for (int i = il; i <= i2; i++)
    sum += i;
    return sum;
}
int main(){
    srand(time(0));
    int r = rand() % 256;
    int g = rand() % 256;
    int b = rand() % 256;
    int randomNum = rand() % 999 + 1 ;
    
    cout <<"Sum from 1 to 10 is " << sum(1, 10) <<endl;
    cout <<"Sum from 1 to 4 is " << sum(1, 4) <<endl;
    cout <<"Sum from 1 to 100 is " << sum(1, 100) <<endl;
    cout << randomNum <<endl;
    cout << " Randomize color: " << "("<<r << ","<< g << ","<< b <<")"<< endl;
    cout << " end of program " <<endl;

    
    return 0;
}