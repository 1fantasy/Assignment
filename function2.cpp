#include <iostream>
using namespace std;

// Function prototype
char determineGrade(double avgScore);

int main() {
    double avgScore;

    cout << "Enter your average score: ";
    cin >> avgScore; 

    cout << "Your Grade is: " << determineGrade(avgScore) << endl;

    return 0;
}

// Function definition using switch
char determineGrade(double avgScore) {
    int gradeGroup = avgScore / 10; 

    switch (gradeGroup) {
        case 10:
        case 9: return 'A';
        case 8: return 'B';
        case 7: return 'C';
        case 6: return 'D';
        default: return 'F';
    }
}
