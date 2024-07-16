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

    if (score >= 70) {
        cout << "Student: " << fullName << endl;
        cout << "Course: " << course << endl;
        cout << "Grade: A" << endl;
    } else if (score >= 60 && score < 70) {
        cout << "Student: " << fullName << endl;
        cout << "Course: " << course << endl;
        cout << "Grade: B" << endl;
    } else if (score >= 50 && score < 60) {
        cout << "Student: " << fullName << endl;
        cout << "Course: " << course << endl;
        cout << "Grade: C" << endl;
    } else if (score >= 40 && score < 50) {
        cout << "Student: " << fullName << endl;
        cout << "Course: " << course << endl;
        cout << "Grade: D" << endl;
    } else if (score < 40) {
        cout << "Student: " << fullName << endl;
        cout << "Course: " << course << endl;
        cout << "Grade: F" << endl;
    } else {
        cout << "Invalid score" << endl;
    }

    return 0;
}