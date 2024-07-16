#include <iostream>
#include <string>

using namespace std;

int main() {
    string fullName, course;
    int score;

    cout << "Enter student's full name: ";
    getline(cin, fullName);
    cout << "Enter course: ";
    getline(cin, course);
    cout << "Enter score (out of 100): ";
    cin >> score;

    if (score < 0 || score > 100) {
        cout << "Invalid score" << endl;
        return 1;
    }

    char grade;
    switch (score / 10) {
        case 10:
        case 7:
            grade = 'A';
            break;
        case 6:
            grade = 'B';
            break;
        case 5:
            grade = 'C';
            break;
        case 4:
            grade = 'D';
            break;
        default:
            grade = 'F';
            break;
    }

    cout << "Student: " << fullName << endl;
    cout << "Course: " << course << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}