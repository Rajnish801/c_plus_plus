#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main (){
    int n ;
    double sum = 0.0;
    cout<<"Enter the Number:";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + 1.0/pow(i,i);
    }
    cout<<fixed<<setprecision(4);
    cout<<"the sum of the series is :"<<" "<<sum<<endl;
    return 0;
}