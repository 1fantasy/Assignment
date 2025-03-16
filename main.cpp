#include <iostream>
#include <string>
using namespace std;

// Function declarations
double calculateAverage(int scores[], int numScores);
char determineGrade(double avgScore);
void displayResults(string names[], double averages[], char grades[], int numStudents);

int main() {
    int number; // number of students
    int numberoftest; // number of test scores
    string names[10]; // array of student names (max 10 students)
    int testscores[10]; // array to store test scores (max 10 per student)
    double averages[10]; // array to store average scores (for each student)
    char grades[10]; // array to store grades (for each student)
    int total;

    cout << "Enter Number Of Students: ";
    cin >> number;

    for (int i = 0; i < number; i++) {
        cout << "Student Name: ";
        cin >> names[i];  // Get student name

        cout << "Number of Test Scores: ";
        cin >> numberoftest;

        total = 0; // Reset total for each student

        // Input test scores for the student
        for (int j = 0; j < numberoftest; j++) {
            do {
                cout << "Enter Test Score " << j + 1 << ": ";
                cin >> testscores[j];

                if (testscores[j] < 0 || testscores[j] > 100) {
                    cout << "Invalid Test Score! Please enter a value between 0 and 100.\n";
                }
            } while (testscores[j] < 0 || testscores[j] > 100);

            total += testscores[j]; // Add score to total
        }

        // Calculate the average score for the student
        averages[i] = calculateAverage(testscores, numberoftest);

        // Determine the grade for the student
        grades[i] = determineGrade(averages[i]);
    }

    // Call the displayResults function to display the student results
    displayResults(names, averages, grades, number);

    return 0;
}

// Function to calculate average test score
double calculateAverage(int scores[], int numScores) {
    int sum = 0;
    for (int i = 0; i < numScores; i++) {
        sum += scores[i]; // Sum all test scores
    }
    return sum / double(numScores); // Return average as a double
}

// Function to determine grade based on average score
char determineGrade(double avgScore) {
    if (avgScore >= 90) return 'A';
    else if (avgScore >= 80) return 'B';
    else if (avgScore >= 70) return 'C';
    else if (avgScore >= 60) return 'D';
    else return 'F';
}

// Function to display student results
void displayResults(string names[], double averages[], char grades[], int numStudents) {
    cout << endl <<  "      Student Results:    " << endl;
    cout << "  Name   Average Score   Grade\n";
    cout << "---------------------------------\n";

    for (int i = 0; i < numStudents; i++) {
     cout << names[i] << "       " << averages[i] << "      " << grades[i] << endl;
    }
}
