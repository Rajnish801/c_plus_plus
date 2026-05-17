#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the value:";
    int n;
    long f = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
        f *= i;
    cout << f;

    return 0;
}