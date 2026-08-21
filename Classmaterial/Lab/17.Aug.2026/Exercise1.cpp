#include <iostream>


using namespace std;

double multi(int x){
    for (int y=1; y <=10; y++)
    {   int multi = x*y;
        cout << x << "*" << y << "=" << multi << endl;
    }
}
int main(){
    multi(5);
    return 0;
}