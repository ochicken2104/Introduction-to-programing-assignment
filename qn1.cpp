#include <iostream>
#include <string>

using namespace std;

struct Customer {
    string name;
    int age;
    double bankBalance;
    string crbStatus;
    int monthsAsCustomer;
};

bool isQualifiedForLoan(const Customer& customer) {
    return customer.age > 22 &&
           customer.bankBalance > 50000 &&
           customer.crbStatus == "good" &&
           customer.monthsAsCustomer > 6;
}

int main() {
    Customer customer;

    cout << "Enter customer details:" << endl;
    cout << "Name: ";
    getline(cin, customer.name);
    cout << "Age: ";
    cin >> customer.age;
    cout << "Bank balance: ";
    cin >> customer.bankBalance;
    cout << "CRB status (good/bad): ";
    cin >> customer.crbStatus;
    cout << "Months as customer: ";
    cin >> customer.monthsAsCustomer;

    if (isQualifiedForLoan(customer)) {
        cout << "Congratulations, " << customer.name << " is qualified for a loan!" << endl;
    } else {
        cout << "Sorry, " << customer.name << " is not qualified for a loan." << endl;
    }

    return 0;
}