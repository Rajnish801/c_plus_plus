#include <iostream>
using namespace std;

int main()
{
    int n, r, s = 0, t;
    cout<<"Enter the value:";
    cin >> n;
    t = n;
    while (n > 0)
    {
        r = n % 10;
        s = s + (r * r * r);
        n /= 10;
    }
    if (t == s)
        cout << "Armstrong";
    else
        cout << "Not";

    return 0;
}