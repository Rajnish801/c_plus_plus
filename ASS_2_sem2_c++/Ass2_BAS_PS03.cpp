#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: "; 
    cin >> n; 
    if (n % 5 == 0) 
    {
        cout << "The entered value is divisible by 5: " << n << "\n";
    } 
    else 
    {
        cout << "The entered value is not divisible by 5: " << n << "\n";
    }

    return 0;
}