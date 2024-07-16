#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main() {
    int timer = 0; 

    while (true) {
        switch (timer % 10) {
            case 0: 
            case 1:
            case 2:
            case 3:
            case 4:
                cout << "Red light" << endl;
                break;
            case 5: 
            case 6:
                cout << "Yellow light" << endl;
                break;
            case 7: 
            case 8:
            case 9:
                cout << "Green light" << endl;
                break;
        }

        this_thread::sleep_for(chrono::seconds(1)); 
        timer++; 
    }

    return 0;
}