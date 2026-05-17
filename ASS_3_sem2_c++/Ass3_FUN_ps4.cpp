#include <iostream>
using namespace std;

int main() 
{
    int n , sum = 0 , i = 1;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "The first " << n << " natural numbers are:";
    while (i <= n)
    {
        sum +=  i ;
        i = i +1;
    }
    cout<<sum;
    
    return 0;
}