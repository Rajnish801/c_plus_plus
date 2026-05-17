#include<iostream>
#include<math.h>
using namespace std;
int main (){
    int n ;
    double sum = 0;
    cout<<"Enter the Number:"<<" ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        int a = 0;
        for (int j = 1; j <= i ; j++)
        {
            a = a + j;    
        }
        sum = sum + a;
        
    }
    cout<<"the sum of the series is :"<<" "<<sum<<endl;
    return 0;
}