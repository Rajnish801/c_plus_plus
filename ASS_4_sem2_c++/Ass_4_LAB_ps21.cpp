#include<iostream>
using namespace std;
int main(){
int value = 10 ;
int* p = &value;
if (p == nullptr) {
    cout << "Cannot dereference" << endl;
} else {
    cout << *p << endl;
}
    return 0;
}