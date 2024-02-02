#include "Cinema.h"
#include <iostream>

using namespace std;

int main() {

    //Cinema object
    Cinema cinema;
    cout << "Cinema Reservations:" << endl;

    while (true) {
        cinema.displayScreenings();

        cout << "Select a screening to reserve seats (0 to exit): ";
        int choice;
        cin >> choice;

        if (choice == 0) {
            break;
        }
        else if (choice > 0 && choice <= 5) {
            int screeningIndex = choice - 1;
            cinema.displaySeats(screeningIndex);
            cinema.reserveSeat(screeningIndex);
        }
        else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    cout << "Thank you for using our cinema reservation system." << endl;
    return 0;
}