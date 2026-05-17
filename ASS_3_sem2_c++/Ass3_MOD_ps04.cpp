#include <iostream>
using namespace std;

int main() {
    int n;
    int first = 0, second = 1, next;

    cout << "Enter the number of terms (n): ";
    cin >> n;

    cout << "Fibonacci Series up to " << n << " terms: " << endl;

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            cout << first << " ";
            continue;
        }
        if (i == 2) {
            cout << second << " ";
            continue;
        }
        
        next = first + second;
        first = second;
        second = next;

        cout << next << " ";
    }

    cout << endl;
    return 0;
}