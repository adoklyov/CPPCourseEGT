#ifndef CINEMA_H
#define CINEMA_H

#include <string>

using namespace std;

class Cinema {

public:

    //Constructor
    Cinema();

    //Methods
    void displayScreenings() const;
    void displaySeats(int screeningIndex) const;
    void reserveSeat(int screeningIndex);

private:

    //Attributes
    static const int NUM_SCREENINGS = 5;
    static const int ROWS = 10;
    static const int COLS = 10;
    string screenings[NUM_SCREENINGS];
    bool seats[NUM_SCREENINGS][ROWS][COLS];
};

#endif