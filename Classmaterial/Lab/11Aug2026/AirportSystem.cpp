#include <iostream>
using namespace std;

int main() {
    //variables
    const int TOTAL = 200; //because the limit is 200 passenger
    int processed = 0, safe = 0, screening = 0, highRisk = 0;
    int consecutiveHigh = 0;
    int highest = -1, lowest = 101;
    int stoppedAt = -1;
    int noShow = 0; //track passengers who didn't show up

    for (int i = 1; i <= TOTAL; i++) {
        int score;
        cout << "Enter risk score for passenger " << i << ": ";
        cin >> score;

        while (score > 100) { //keep asking until enter 1 to 100
            cout << "Please enter 1-100 only" << endl;
            cout << "Enter risk score for passenger " << i << ": ";
            cin >> score;
        }

        if (score == -1) {
            noShow++; //count before skipping
            continue; // no-show, skip
        }

        processed++;

        if (score > highest) highest = score;
        if (score < lowest) lowest = score;

        if (score <= 50) {
            safe++;
            consecutiveHigh = 0; //because this is low risk so we do not calculate that's why 
                                // there is no screening++;
        } else if (score <= 80) {
            screening++;
            consecutiveHigh = 0;
        } else { // 81-100
            highRisk++;
            consecutiveHigh++;
            if (consecutiveHigh == 3) {
                stoppedAt = i;
                break;
            }
        }
    }

    double pctHighRisk = processed > 0 ? (highRisk * 100.0 / processed) : 0.0;

    cout << "\n=====Airport Security System=====\n";
    cout << "Total processed: " << processed << endl;
    cout << "No-shows: " << noShow << endl;
    cout << "Safe: " << safe << endl;
    cout << "Needs Screening: " << screening << endl;
    cout << "High Risk: " << highRisk << endl;
    cout << "Highest score: " << highest << endl;
    cout << "Lowest valid score: " << lowest << endl;
    cout << "High-Risk %: " << pctHighRisk << "%" << endl;

    if (stoppedAt != -1) //if the we pressed -1, means no show
        cout << "Screening stopped at passenger #" << stoppedAt << endl;

    return 0;
}