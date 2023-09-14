#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
const int NUM_ROWS = 5;
const int NUM_COLS = 5;
int colIndex;
struct Seat 
{
    int row;
    int col;
    bool booked;
};
Seat seats[NUM_ROWS][NUM_COLS];
void displaySeats() 
{
    cout << "  ";
    for (int i = 1; i <= NUM_COLS; i++) {
        cout << setw(3) << i;
    }
    cout << endl;
    for (int i = 0; i < NUM_ROWS; i++) 
    {
        cout << char('A' + i) << " ";
        for (int j = 0; j < NUM_COLS; j++) {
            cout << (seats[i][j].booked ? " X " : " O ");
        }
        cout << endl;
    }
}
int main() {
    char choice;
    do {
        cout << "Movie Ticket Booking System" << endl;
        cout << "1. View Movie Listings" << endl;
        cout << "2. Book a Ticket" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) 
        {
            case '1':
                cout << "Movie Listings:" << endl;
                cout << "1. Movie A" << endl;
                cout << "2. Movie B" << endl;
                break;

            case '2':
                displaySeats();
                char row;
                int col;
                cout << "Enter the row (A-E) and column (1-5) for your seat: ";
                cin >> row >> col;
                int rowIndex = row - 'A';
                colIndex = col - 1;
                if (rowIndex >= 0 && rowIndex < NUM_ROWS && colIndex >= 0 && colIndex < NUM_COLS) {
                    if (!seats[rowIndex][colIndex].booked) {
                        seats[rowIndex][colIndex].booked = true;
                        cout << "Seat booked successfully!" << endl;
                    } else {
                        cout << "Sorry, this seat is already booked." << endl;
                    }
                } else {
                    cout << "Invalid seat selection." << endl;
                }
                break;

            case '3':
                cout << "Exiting the program." << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != '3');

    return 0;
}