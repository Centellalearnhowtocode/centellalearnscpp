#include <iostream>
using namespace std;

int main(){
    string name;
    cout << "Enter your name: " ;
    getline(cin, name);

    //cout << name.at(4) <<endl;
    //cout << name.insert(3,"$$$") << endl;

    //cout<< name.find('C') <<endl;
    cout<< name.erase(5,1) <<endl;

    return 0;
}