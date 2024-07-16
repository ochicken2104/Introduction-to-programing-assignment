#include <iostream>
#include <iomanip>

using namespace std;

double calculateTotalCost(double purchaseAmount) {
    double totalCost = purchaseAmount;

    if (purchaseAmount >= 10000) {
        double discount = purchaseAmount * 1000;
        totalCost -= discount;
        cout << "10% discount applied!" << endl;
    }
    else if (purchaseAmount >= 5000) {
        double discount = purchaseAmount * 250;
        totalCost -= discount;
        cout << "5% discount applied!" << endl;
    }
    else {
        cout << "No discount applied." << endl;
    }

    return totalCost;
}

int main() {
    double purchaseAmount;

    cout << "Enter the purchase amount: kshs";
    cin >> purchaseAmount;

    double totalCost = calculateTotalCost(purchaseAmount);
    cout << fixed << setprecision(2);
    cout << "Total cost: kshs" << totalCost << endl;

    return 0;
}