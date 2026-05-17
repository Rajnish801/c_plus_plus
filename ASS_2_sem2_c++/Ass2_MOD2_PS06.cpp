#include <iostream>

using namespace std;

int main() {
    float x, y;
    char op;

    cout << "Enter expression : ";
    if (!(cin >> x >> op >> y)) {
        cout << "Invalid input format." << endl;
        return 1;
    }

    switch (op) {
        case '+':
            cout << "Result: " << x + y << endl;
            break;
        case '-':
            cout << "Result: " << x - y << endl;
            break;
        case '*':
            cout << "Result: " << x * y << endl;
            break;
        case '/':
            if (y != 0) {
                cout << "Result: " << x / y << endl;
            } else {
                cout << "Error: Division by zero." << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator." << endl;
            break;
    }

    return 0;
}