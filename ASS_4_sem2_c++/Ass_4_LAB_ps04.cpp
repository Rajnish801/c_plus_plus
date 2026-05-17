#include<iostream>
using namespace std;
int main(){
    int x = 100;
    int* p = &x;
    cout<<"the value of x:"<<x<<endl;
    cout<<"Addres stored in p is:"<<p<<endl;
    cout<<"Addres stored in *p is :"<<*p<<endl;
    cout<<"Addres of the pointer itself is :"<<&p<<endl;
}