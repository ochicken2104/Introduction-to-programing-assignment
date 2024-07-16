#include <iostream>
#include <iomanip>

using namespace std;

struct BankAccount {
    double balance;
    double dailyLimit;
};


void processWithdrawal(BankAccount& account, double amount) {
    if (amount <= 0) {
        cout << "Invalid withdrawal amount. Try again." << endl;
        return;
    }

    if (amount > account.dailyLimit) {
        cout << "Withdrawal amount exceeds daily limit. Try again." << endl;
        return;
    }

    if (amount > account.balance) {
        cout << "Insufficient funds.Try again." << endl;
        return;
    }

    account.balance -= amount;
    cout << "Withdrawal successful. New balance: kshs" << fixed << setprecision(2) << account.balance << endl;
}

int main() {
    BankAccount account;
    account.balance = 1500000.00; 
    account.dailyLimit = 750000.00; 

    double withdrawalAmount;

    cout << "Enter the withdrawal amount: kshs";
    cin >> withdrawalAmount;

    processWithdrawal(account, withdrawalAmount);

    return 0;
}