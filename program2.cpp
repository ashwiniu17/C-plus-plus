#include <iostream>
using namespace std;

int main() {
    const int cities = 5;
    const int days = 6;
    float temp[cities][days];
    float highest, lowest;
    int highCity = 0, lowCity = 0, highDay = 0, lowDay = 0;

    cout << "Enter the temperatures of 5 cities for 6 days:\n";
    for (int i = 0; i < cities; i++) {
        for (int j = 0; j < days; j++) {
            cout << "City " << i + 1 << ", Day " << j + 1 << ": ";
            cin >> temp[i][j];
        }
    }

    highest = lowest = temp[0][0];

    for (int i = 0; i < cities; i++) {
        for (int j = 0; j < days; j++) {
            if (temp[i][j] > highest) {
                highest = temp[i][j];
                highCity = i;
                highDay = j;
            }
            if (temp[i][j] < lowest) {
                lowest = temp[i][j];
                lowCity = i;
                lowDay = j;
            }
        }
    }

    cout << "\nHighest temperature: " << highest
         << " (City " << highCity + 1 << ", Day " << highDay + 1 << ")\n";
    cout << "Lowest temperature: " << lowest
         << " (City " << lowCity + 1 << ", Day " << lowDay + 1 << ")\n";

    return 0;
}




