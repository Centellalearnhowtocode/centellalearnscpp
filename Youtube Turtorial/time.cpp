#include <iostream>
#include <chrono>
using namespace std;
int main() {
    // Automatically fetches and formats the current local time point
    auto now = chrono::system_clock::now();
    cout << "Current Date & Time (C++20):"<< chrono::zoned_time{std::chrono::current_zone(), now}<< endl;

    return 0;
}
