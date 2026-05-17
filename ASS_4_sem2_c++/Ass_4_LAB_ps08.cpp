#include<iostream>
using namespace std;
int main(){
    int x = 100;
    double y = 50;
    int* pe = &x;
    double* pq = &y;
    
    cout<<"THE value stored x is :"<<*pe<<endl;
    cout<<"The value stored y is :"<<*pq<<endl;
}