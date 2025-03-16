#include <iostream>

using namespace std;

// Function declaration
double calculateAverage(int scores[], int numScores);

int main() {
    int scores[] = {80, 90, 75, 85, 95}; 
    int numScores = 5; 

    double average = calculateAverage(scores, numScores); 
    cout << "Average score: " << average << endl;

    return 0;
}

// Function definition
double calculateAverage(int scores[], int numScores) {
    int sum = 0; 

    for (int i = 0; i < numScores; i++) {
        sum += scores[i]; 
    }

    return sum / (numScores * 1.0); 
}
