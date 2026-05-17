#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "The first " << n << " natural numbers are:";

    for (int i = 1; i <= n; i++) 
    {
        cout << i << " ";
    }
    return 0;
}