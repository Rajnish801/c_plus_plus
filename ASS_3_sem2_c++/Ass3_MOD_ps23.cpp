#include <iostream>
using namespace std;
int main()
{
    int sum = 0, count = 0;
    for (int i = 100; i <= 200; i++)
    {

        if (i % 9 == 0)
        {
            sum = sum + i;
            count++;
        }
    }
    cout << " total count " << count << endl;
    cout << " The sum of intger in btw 100 t0 200 which is disible by 9 " << " = " << sum;

    return 0;
}