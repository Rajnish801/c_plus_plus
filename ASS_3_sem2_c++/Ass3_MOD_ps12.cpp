#include <iostream>
using namespace std;

int main() {
    int start, end;
    bool found = false;

    cout << "Enter the starting number: ";
    cin >> start;
    cout << "Enter the ending number: ";
    cin >> end;

    cout << "Prime numbers between " << start << " and " << end << " are: " << endl;

    
    if (start < 2) start = 2;

    for (int i = start; i <= end; i++) {
        bool isPrime = true;

        
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break; 
            }
        }

            if (isPrime) {
            cout << i << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "None found in this range.";
    }

    cout << endl;
    return 0;
}