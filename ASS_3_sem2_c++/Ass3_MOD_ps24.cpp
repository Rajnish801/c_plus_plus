#include<iostream>
using namespace std;
int main (){
    int n , a;
    cout<<"Enter a number ";
    cin>>n;
    a = n;
    cout<<"the revers of "<<a<<" is: ";
    if(n == 0){
        cout<<0;
    }
    while (n > 0)
    {
        int digit = n % 10;
        cout<<digit;
        n = n/10 ;
    }
    
    return 0;
}