#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int* p = &x;
    cout << "x   = " << x   << "  // value of x" << endl;
    cout << "&x  = " << &x  << "  // address of x" << endl;
    cout << "p   = " << p   << "  // pointer p holds address of x" << endl;
    cout << "&p  = " << &p  << "  // address of pointer p itself" << endl;
    cout << "*p  = " << *p  << "  // value at address p points to" << endl;
    return 0 ;

}