#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if (n >= 0)
    {
        cout << "The number is possitive:" << n << "\n";
    }
    else
    {
        cout << "The number is negative:" << n << "\n";
    }
    return 0;
}
