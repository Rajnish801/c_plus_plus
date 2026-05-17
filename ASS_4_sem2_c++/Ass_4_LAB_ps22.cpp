#include<iostream>
using namespace std;
int main(){
    int val = 100;
    int* p = &val;
    p = nullptr;

    // *p = 50; 
    // WARNING: Dereferencing a nullptr above will cause the program to crash (Segmentation Fault).
    return 0;
}