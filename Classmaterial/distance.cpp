#include <iostream>
#include <cmath>
using namespace std;

int main(){

  //Exercise 1
    double x1, x2, y1, y2;

    cout << "Enter the coordinates (x1 and y1): " << endl;
    cin >> x1 >> y1;
    cout << "Enter the coordinates (x2 and y2): " << endl;
    cin >> x2 >> y2;

    double result = pow(pow(x2 - x1, 2) + pow(y2 - y1, 2), 0.5);

    cout << "The distance between the two points is " << result << endl;



    //Excercise 2
    double side;
    double area;
    cout << "Enter the side" << endl;
    cin >> side;
    area = (3*pow(3,0.5)/2)*pow(side,2);
    cout << "The area of the hexagon is" << area << endl;
    
    return 0;

}


