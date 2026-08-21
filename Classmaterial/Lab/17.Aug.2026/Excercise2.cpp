#include <iostream>
using namespace std;

void circleCalc(int x) {
    const double pie = 3.14;
    
    for (int r = 1; r <= x; r++) {
        double circumference = 2 * pie * r;
        double area = pie * r * r;
        
        cout << "r=" << r 
             << " | Circumference=" << circumference 
             << " | Area=" << area << endl;
    }
}

int main() {
    circleCalc(2);
    return 0;
}