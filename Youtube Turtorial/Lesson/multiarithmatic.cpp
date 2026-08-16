#include <iostream>

using namespace std;

int main (){


    int students = 5 + 3 - 12 * 2 / 4;

    cout << students<< endl;

    //what do you think will be printed? 
    // so in c program the calculation will goes as following

    //parenthesis
    //multiplication & devision
    //additon & substraction
    // I saw what's wrong,
    // so since the devision comes first we will do
    // 12/2 = 6, and 6*2 =12, and 6+2 =8, and 8-12=-4
    // let's test different numbers
    //12*2 =24, 24 /4 = 6, 5+3 = 8, 8 - 6;


    // thank you for coming to my dumb show. see you next video.
    return 0;
}