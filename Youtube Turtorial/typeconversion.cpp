#include <iostream>
using namespace std;
int main (){

    cout << "Centella learns CPP" << endl;

    //today we are going to nlearn type conversion.
    // type conversion = conversion a value of one datatype ot another
    //           

    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions *100;

    cout << score << "%";
    return 0;

}