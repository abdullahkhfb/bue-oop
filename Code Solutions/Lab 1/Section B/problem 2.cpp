#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int NUM_STUDENTS = 5;
const int NUM_TESTS = 4;

void calculateGrade(double average, char &grade)
{
    if (average >= 80 && average <= 100)
    {
        grade = 'A';
    }
    else if (average >= 70 && average < 80)
    {
        grade = 'B';
    }
    else if (average >= 60 && average < 70)
    {
        grade = 'C';
    }
    else if (average >= 50 && average < 60)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }
}

int main()
{
    string studentNames[NUM_STUDENTS];
    char studentGrades[NUM_STUDENTS];
    double testScores[NUM_STUDENTS][NUM_TESTS];

    // Input student names and test scores
    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        cout << "Enter the name of student " << (i + 1) << ": ";
        cin >> studentNames[i];

        for (int j = 0; j < NUM_TESTS; j++)
        {
            do
            {
                cout << "Enter test score " << (j + 1) << " for " << studentNames[i] << ": ";
                cin >> testScores[i][j];
                if (testScores[i][j] < 0 || testScores[i][j] > 100)
                {
                    cout << "Invalid score. Please enter a value between 0 and 100." << endl;
                }
            } while (testScores[i][j] < 0 || testScores[i][j] > 100);
        }
    }

    // Calculate average scores and grades
    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        double sum = 0;
        for (int j = 0; j < NUM_TESTS; j++)
        {
            sum += testScores[i][j];
        }
        double average = sum / NUM_TESTS;
        calculateGrade(average, studentGrades[i]);
    }

    // Display results
    cout << fixed << setprecision(2);
    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        double sum = 0;
        for (int j = 0; j < NUM_TESTS; j++)
        {
            sum += testScores[i][j];
        }
        double average = sum / NUM_TESTS;
        cout << "Student: " << studentNames[i] << endl;
        cout << "Average Score: " << average << endl;
        cout << "Grade: " << studentGrades[i] << endl;
        cout << "------------------------" << endl;
    }

    return 0;
}