#include <iostream>
#include <sstream>
using namespace std;

int main() {
    //variables
    const int ROOMS = 20;
    const int STUDENTS = 50;

  
    int totalAbsentAll = 0;
    int totalPassAll = 0;
    int totalValidAll = 0;
    double totalScoreSumAll = 0;
    int suspiciousRoomCount = 0;
    double bestRoomAverage = -1;
    int bestRoomNumber = -1;
    bool endEverything = false; //flag to break out of both loops

    for (int room = 1; room <= ROOMS; room++) {
        //per-room trackers, reset every room
        int roomValid = 0, roomAbsent = 0, roomPass = 0;
        double roomSum = 0;
        double roomHighest = -1, roomLowest = 101;
        int consecutiveHighScorers = 0;
        bool roomSuspicious = false;

        cout << "\n--- Room " << room << " ---" << endl;

        for (int student = 1; student <= STUDENTS; student++) {
            string input;
            double score;
            bool validEntry = false; //stays false until we get -1, or a real 1-100 score

            while (!validEntry) { //keep asking until valid, "d", or "e"
                cout << "Enter score for student " << student
                     << " (1-100, -1 = absent, d = done with room, e = end everything): ";
                cin >> input;

                if (input == "e" || input == "E") { //end whole program
                    cout << "Ending entire process now." << endl;
                    endEverything = true;
                    break; // breaks this while loop
                }

                if (input == "d" || input == "D") { //done early with this room
                    cout << "Room " << room << " ended early" << endl;
                    break; // breaks this while loop
                }

                stringstream ss(input);
                if (!(ss >> score)) { //not a number and not "d"/"e"
                    cout << "Invalid input, please enter a number, 'd', or 'e'." << endl;
                    continue; // re-ask, stay in while loop
                }

                if (score == -1) { //absent is always allowed, skips range check
                    validEntry = true;
                } else if (score < 1 || score > 100) { //out of range
                    cout << "Please enter a score from 1-100 only." << endl;
                    // validEntry stays false, loop asks again
                } else {
                    validEntry = true; //good score in range
                }
            }

            if (input == "e" || input == "E") break; // exit inner (student) loop
            if (input == "d" || input == "D") break; // exit inner (student) loop

            if (score == -1) {
                roomAbsent++; //count before skipping
                continue; // absent, skip
            }

            roomValid++;
            roomSum += score;

            if (score > roomHighest) roomHighest = score;
            if (score < roomLowest) roomLowest = score;

            if (score >= 50) roomPass++;

            if (score > 95) {
                consecutiveHighScorers++;
                if (consecutiveHighScorers == 10) {
                    roomSuspicious = true;
                    cout << "Room " << room << " flagged as SUSPICIOUS at student "
                         << student << ". Stopping this room." << endl;
                    break;
                }
            } else {
                consecutiveHighScorers = 0; //reset on not-qualified score
            }
        }

        double roomAverage = roomValid > 0 ? (roomSum / roomValid) : 0.0;
        double roomPassRate = roomValid > 0 ? (roomPass * 100.0 / roomValid) : 0.0;

        cout << "Room " << room << " Average: " << roomAverage << endl;
        cout << "Room " << room << " Highest: " << roomHighest << endl;
        cout << "Room " << room << " Lowest: " << roomLowest << endl;
        cout << "Room " << room << " Absent: " << roomAbsent << endl;
        cout << "Room " << room << " Pass rate: " << roomPassRate << "%" << endl;

        //overall total
        totalAbsentAll += roomAbsent;
        totalPassAll += roomPass;
        totalValidAll += roomValid;
        totalScoreSumAll += roomSum;
        if (roomSuspicious) suspiciousRoomCount++;

        //bbest room
        if (roomAverage > bestRoomAverage) {
            bestRoomAverage = roomAverage;
            bestRoomNumber = room;
        }

        if (endEverything) break; //end everythingggg
    }

    double overallAverage = totalValidAll > 0 ? (totalScoreSumAll / totalValidAll) : 0.0;
    double overallPassRate = totalValidAll > 0 ? (totalPassAll * 100.0 / totalValidAll) : 0.0;

    cout << "\n--- University Report ---" << endl;
    cout << "Total suspicious rooms: " << suspiciousRoomCount << endl;
    cout << "Total absent students: " << totalAbsentAll << endl;
    cout << "Overall university average: " << overallAverage << endl;
    cout << "Overall pass rate: " << overallPassRate << "%" << endl;
    cout << "Room with highest average: Room " << bestRoomNumber
         << " (" << bestRoomAverage << ")" << endl;

    return 0;
}