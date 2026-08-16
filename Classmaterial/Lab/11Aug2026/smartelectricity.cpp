#include <iostream>
#include <sstream>
using namespace std;

int main() {
    //variables
    const int TOTAL = 500; //because the limit is 500 households
    int processed = 0, low = 0, normal = 0, high = 0;
    int suspicious = 0;
    double highest = -1, lowest = 999999;
    double sum = 0;
    int stoppedAt = -1;
    int missing = 0; //households with missing data

    for (int i = 1; i <= TOTAL; i++) {
        string input;
        cout << "Enter electricity consumption (kWh) for household " << i
             << " (or press c to calculate): ";
        cin >> input;

        if (input == "c" || input == "C") { //when I wanna stop
            stoppedAt = i;
            break;
        }

        double reading;
        stringstream ss(input);
        if (!(ss >> reading)) { //not a valid number and not "c"
            cout << "Invalid input, please enter a number or 'c'." << endl;
            i--; //redo this household
            continue;
        }

        if (reading == -1) {
            missing++; //count before skipping
            continue; // missing data, skip
        }

        processed++;
        sum += reading;

        if (reading > highest) highest = reading;
        if (reading < lowest) lowest = reading;

        if (reading < 100) {
            low++;
        } else if (reading <= 500) {
            normal++;
        } else { // greater than 500
            high++;
        }

        if (reading > 5000) { //suspicious check is separate from usage category
            suspicious++;
            if (suspicious == 5) {
                stoppedAt = i;
                break;
            }
        }
    }

    double average = processed > 0 ? (sum / processed) : 0.0;
    double pctSuspicious = processed > 0 ? (suspicious * 100.0 / processed) : 0.0;
    double pctHigh = processed > 0 ? (high * 100.0 / processed) : 0.0;

    cout << "\n--- Report ---\n";
    cout << "Total valid households analyzed: " << processed << endl;
    cout << "Missing data skipped: " << missing << endl;
    cout << "Low Usage: " << low << endl;
    cout << "Normal Usage: " << normal << endl;
    cout << "High Usage: " << high << endl;
    cout << "Average consumption: " << average << " kWh" << endl;
    cout << "Highest consumption: " << highest << " kWh" << endl;
    cout << "Lowest consumption: " << lowest << " kWh" << endl;
    cout << "Suspicious households: " << suspicious << " (" << pctSuspicious << "%)" << endl;

    if (stoppedAt != -1)
        cout << "Analysis stopped at household #" << stoppedAt << endl;

    // Bonus: unusually high city consumption check
    if (pctHigh > 60.0)
        cout << "Bonus: City is experiencing unusually high electricity consumption ("
             << pctHigh << "% High Usage)." << endl;
    else
        cout << "Bonus: City consumption is within normal range ("
             << pctHigh << "% High Usage)." << endl;

    return 0;
}