#include <iostream>
using namespace std;
int main() {
  const double pi = 3.14159;
  double radius = 10 ;
  double cicumference = 2 * pi * radius;

  cout<< cicumference << "cm";

  const double PI = 3.14159;
  const int LIGHT_SPEED = 299792458;
  const int WIDTH = 1920;
  const int HEIGHT = 1080;
  
  double result = PI + LIGHT_SPEED + WIDTH - HEIGHT + cicumference;
  cout << "\n" << result << endl;

  //keyword specifies that an entity is immutable (read-only) and prevents program code from modifying it after initialization
  return 0;
}