#include<iostream>
using namespace std;
int main () {
    int n ;
    cout<<"Enter the positive number:";
    cin>>n;
    for (int i = n - 1; i >= 2; i--)
    {
        bool isprime = true;

        for (int j = 2; j * j <= i; j++)
        {
            if (i % 2 == 0)
            {
                isprime = false;
                break;
            }
            
        }
        if (isprime)
        {
            cout<<"The last prime number before:"<<" "<<n <<" is "<<i<<endl;
        }
        
        
    }
    
    
    return 0;
}