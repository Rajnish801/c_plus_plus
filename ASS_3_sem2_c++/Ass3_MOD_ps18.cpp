#include<iostream>
#include<math.h>
using namespace std;
int main (){
    int n ;
    double sum = 1;
    cout<<"Enter the Number";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i * i;
    }
    cout<<"the sum of the series is :"<<" "<<sum<<endl;
    return 0;
}