#include<iostream>
using namespace std;
int main(){
    int x = 100;
    int* p = &x;
    *p = 50;
    cout<<"the value of x:"<<x<<endl;
}