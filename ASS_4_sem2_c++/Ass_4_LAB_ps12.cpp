#include<iostream>
using namespace std;
int main(){
    int x = 10 ;
    int* p = &x;
    x = 30;
    cout << "After x = 30  -> *p = " << *p << endl; // *p changes
    *p = 20; 
    cout << "After *p = 20 -> x = " << x << endl;   // x changes

    return 0 ;
}