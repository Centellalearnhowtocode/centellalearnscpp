#include <iostream>
using namespace std;

char getGrade(double score)
{
    char grade;
    if (score >= 90 && score <= 100)
    {
        grade = 'A';
    }
    else if (score >= 80 && score < 90)
    {
        grade = 'B';
    }
    else if (score >= 70 && score < 80)
    {
        grade = 'C';
    }
    else if (score >= 60 && score < 70)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }
    return grade;
}

int main()
{
    double score;

    do
    {
        cout << "Enter Score (1-100): ";
        cin >> score;

        if (score < 1 || score > 100)
        {
            cout << "Please enter 1 to 100 only" << endl;
        }

    } while (score < 1 || score > 100);

    cout << "Grade: " << getGrade(score);
    return 0;
}