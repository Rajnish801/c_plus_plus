#include <iostream>

using namespace std;

int main() {
    int m;

    cout << "Enter month number (1-12): ";
    cin >> m;

    if (m < 1 || m > 12) {
        cout << "Invalid month! Please enter a value between 1 and 12." << endl;
    } else {
        switch (m) {
            case 4:
            case 6:
            case 9:
            case 11:
                cout << "30 days" << endl;
                break;
            case 2:
                cout << "28 or 29 days (Leap Year dependent)" << endl;
                break;
            default:
                cout << "31 days" << endl;
                break;
        }
    }

    return 0;
}