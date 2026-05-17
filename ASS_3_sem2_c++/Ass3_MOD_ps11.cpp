#include <iostream>
using namespace std;

int main()
{
    cout << "Perfect numbers between 1 and 500 are:" << endl;
    for (int num = 1; num <= 500; num++)
    {
        int sum = 0;
        for (int i = 1; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                sum = sum + i;
            }
        }
        if (sum == num && num != 0)
        {
            cout << num << endl;
        }
    }

    return 0;
}