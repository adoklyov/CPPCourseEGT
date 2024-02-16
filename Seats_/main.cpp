#include "Cinema.h"
#include <iostream>

using namespace std;

int main() {

    //Cinema object
    Cinema cinema;
    cout << "Cinema Reservations:" << endl;

    //Loop to display screenings and reserve seats
    while (true) {
        cinema.displayScreenings();

        //User input for screening reservation
        cout << "Select a screening to reserve seats (0 to exit): ";
        int choice;
        cin >> choice;

        //Exit if 0 is entered
        if (choice == 0) {
            break;
        }

        //Display seats and reserve seat if a valid screening is selected
        else if (choice > 0 && choice <= 5) {
            int screeningIndex = choice - 1;
            cinema.displaySeats(screeningIndex);
            cinema.reserveSeat(screeningIndex);
        }

        //Invalid choice
        else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    cout << "Thank you for using our cinema reservation system." << endl;
    return 0;
}