#include <iostream>
using namespace std;
int main()
{

    for (int i = 2; i <= 100; i++)
    {
        int c = 0;
        for (int j = 1; j <= i; j++)
            if (i % j == 0)
                c++;
        if (c == 2)
            cout <<"Thses are the number:"<<" "<< i << " "<<endl;
    }

    return 0;
}