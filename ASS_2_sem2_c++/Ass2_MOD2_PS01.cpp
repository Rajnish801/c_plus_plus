#include<iostream>
using namespace std;
int main (){
    int a ,b ,c;
    cout<<"Enter the value of a:"<<"\n";
    cin>>a;
    cout<<"Enter the value of b:"<<"\n";
    cin>>b;
    cout<<"Enter the value of c:"<<"\n";
    cin>>c;
    if (a >= b && a >= c)
    {
        cout<<"a is largest"<<" "<<a;
    }else if (b >= a && b >= c)
    {
        cout<<"b is largest"<<" "<<b;
    }else cout<<"c is largest"<<" "<<c;
    
    
    return 0;
}