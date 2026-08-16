#include <iostream>
using namespace std;

int main (){
    /* today we are learning about logical operator
    && check to see if 2 condition is true
    ||
    !
    */

    int tmp;
    bool sunny =true;

    cout << "Enter the tempurature ";
    cin >> tmp;

    if (tmp < 0 || tmp >=30){
        cout << "The tempurature is ass.\n";
    }
    else {
        cout << "The tempurature is okay \n";
    }

    if (sunny){

        cout <<"The sky is beautiful \n";
    }
    else{
        cout <<"It is ass. \n";
    }

    return 0;
}