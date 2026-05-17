#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int* p = &x;
    int* q = &x;
    *q = 99;
    cout<< "Updated via *q. *p = " << *p << " (reflects change)" << endl;


    return 0 ;
}