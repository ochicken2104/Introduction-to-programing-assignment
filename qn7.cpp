#include <iostream>

using namespace std;

int main() {
    int daysLate;
    char bookType;

    cout << "Enter the number of days late: ";
    cin >> daysLate;

    cout << "Enter the type of book (R for regular, C for children's, or E for reference): ";
    cin >> bookType;

    double fine = 0;

    if (bookType == 'R' || bookType == 'r') { 
        if (daysLate <= 5) {
            fine = 250 * daysLate;
        } else {
            fine = 1250 + 500 * (daysLate - 5);
        }
    } else if (bookType == 'C' || bookType == 'c') { 
        if (daysLate <= 3) {
            fine = 100 * daysLate;
        } else {
            fine = 600 + 200 * (daysLate - 3);
        }
    } else if (bookType == 'E' || bookType == 'e') { 
        fine = 1000 * daysLate;
    } else {
        cout << "Invalid book type. Please try again." << endl;
        return 1;
    }

    cout << "The late fee is: kshs" << fine << endl;

    return 0;
}