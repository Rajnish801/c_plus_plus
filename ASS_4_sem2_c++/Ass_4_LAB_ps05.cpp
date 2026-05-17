#include<iostream>
using namespace std
int main(){
    int a = 100;
    int b = 50 ;
    int* p ;
    p = &a;
    cout<<"Addres stored in A is :"<<*p<<endl;

    p = &b;
    cout<<"Address stored in B is :"<<*p<<endl;
}