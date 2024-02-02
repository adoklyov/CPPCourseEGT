#include "Cinema.h"
#include <iostream>

using namespace std;


//Constructor
Cinema::Cinema() {
    screenings[0] = "The Bee Movie - 12:00";
    screenings[1] = "Shrek 1 - 15:00";
    screenings[2] = "Shrek 2 - 18:00";
    screenings[3] = "Shrek 3 - 21:00";
    screenings[4] = "Ice Age - 24:00";
    for (int i = 0; i < NUM_SCREENINGS; ++i) {
        for (int j = 0; j < ROWS; ++j) {
            for (int k = 0; k < COLS; ++k) {
                seats[i][j][k] = false;
            }
        }
    }
}

//Methods

//Method for displaying the screenings
void Cinema::displayScreenings() const {
    cout << "Available Screenings:" << endl;
    for (int i = 0; i < NUM_SCREENINGS; ++i) {
        cout << (i + 1) << ": " << screenings[i] << endl;
    }
}

//Method for displaying the seats
void Cinema::displaySeats(int screeningIndex) const {
    cout << "Seats for " << screenings[screeningIndex] << ":" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << (seats[screeningIndex][i][j] ? "[X]" : "[ ]") << " ";
        }
        cout << endl;
    }
}


//Method for reserving a seat
void Cinema::reserveSeat(int screeningIndex) {
    int row, col;
    cout << "Enter row and seat number to reserve (e.g., 1 1): " << endl;
    cin >> row >> col;

    row--;
    col--;

    if (row >= 0 && row < ROWS && col >= 0 && col < COLS && !seats[screeningIndex][row][col]) {
        seats[screeningIndex][row][col] = true;
        cout << "Seat reserved successfully!" << endl;
    }
    else {
        cout << "Invalid input or seat already reserved." << endl;
    }
}