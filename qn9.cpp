#include <iostream>
#include <iomanip>

using namespace std;

double calculateTicketPrice(int age, char movieType) {
    double ticketPrice = 0;

    if (age < 12) {
        if (movieType == 'R' || movieType == 'r') {
            ticketPrice = 800;
        }
        else if (movieType == '3' || movieType == 'D' || movieType == 'd') {
            ticketPrice = 1200;
        }
    }
    else if (age >= 12 && age < 65) {
        if (movieType == 'R' || movieType == 'r') {
            ticketPrice = 1200;
        }
        else if (movieType == '3' || movieType == 'D' || movieType == 'd') {
            // 3D movie
            ticketPrice = 1800;
        }
    }
    else {
        // Seniors (65 and above)
        if (movieType == 'R' || movieType == 'r') {
            // Regular movie
            ticketPrice = 1000;
        }
        else if (movieType == '3' || movieType == 'D' || movieType == 'd') {
            // 3D movie
            ticketPrice = 1500;
        }
    }

    return ticketPrice;
}

int main() {
    int age;
    char movieType;

    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter the movie type (R for regular, 3 for 3D): ";
    cin >> movieType;

    double ticketPrice = calculateTicketPrice(age, movieType);
    cout << fixed << setprecision(2);
    cout << "Ticket price: kshs" << ticketPrice << endl;

    return 0;
}