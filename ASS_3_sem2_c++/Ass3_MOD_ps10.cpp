#include<iostream>
using namespace std;
int main (){
    int n , sum = 0;
    cout<<"Enter the number:";
    cin>>n;
    for (int i = 0; i <= n ; i++)
    {
        sum = sum + i ;
    }
    cout<<"The sum of the series 1 + 2 + 3 + ... + " << n << " is: " << sum << endl;
    
    return 0;
}
