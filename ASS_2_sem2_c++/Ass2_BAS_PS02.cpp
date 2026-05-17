#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: "; 
    cin >> n; 
    if (n % 2 == 0) 
    {
        cout << "The entered value is even: " << n << "\n";
    } 
    else 
    {
        cout << "The entered value is odd: " << n << "\n";
    }

    return 0;
}