#include<iostream>
using namespace std;
int main(){
    int* p = nullptr;
    int x = 100;
    p = &x;
    if(p != nullptr){
        cout<<"Value at p :"<<*p<<endl;
    }
}