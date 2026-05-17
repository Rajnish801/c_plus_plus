#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, sum = 0;
    int n;

    cout << "Enter the value of X: ";
    cin >> x;
    cout << "Enter the number of terms (n): ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int exponent = 2 * i;

        long long fact = 1;
        for (int j = 1; j <= exponent; j++)
        {
            fact = fact * j;
        }

        double term = pow(x, exponent) / fact;
        if (i % 2 == 0)
        {
            sum = sum + term;
        }
        else
        {
            sum = sum - term;
        }
    }
    cout << "The sum of the series is: " << sum << endl;

    return 0;
}