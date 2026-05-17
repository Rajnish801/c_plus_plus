#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter the number:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int odd = 2 * i - 1;

        cout << "The first n odd numbers: " << odd << " " << endl;

        sum = sum + odd;
    }
    cout << "Sum of first " << "" << n << " " << " odd natural number " << " = " << sum;
    return 0;
}