#include <iostream>
using namespace std;
//Namespace = provides a solution for preventing name conficts 
//          in a large project. Each entity needs a unique name.
//          A namespace allows for identically named entities
//          as long as the namespaces are different. 

namespace first {
  int x = 1;
}

namespace second {
  int x =2;
}
int main (){
int x = 0;
cout << x << endl;
  return 0;
}