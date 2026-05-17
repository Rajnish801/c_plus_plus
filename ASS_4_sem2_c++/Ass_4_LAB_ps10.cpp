#include<iostream>
using namespace std;
int main(){
    int a = 42;
    int* ptr = &a;
    ptr = nullptr;
    cout << "Pointer set to nullptr. It is safe now." << endl;
    return 0 ;
}