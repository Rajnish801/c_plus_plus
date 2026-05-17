#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout<<"Enter the Number a:";
    cin >> a ;
    cout<<"Enter the Number b:";
    cin >> b ;
    cout<<"Enter the Number c:";
    cin >> c ;
    if (a >= b) {
        if (a >= c) cout<<"a is largest:"<<a;
        else cout<<"c is largest" << c;
    } else {
        if (b >= c) cout<<"b is largest:"<< b;
        else cout<<"c is largest:" << c;
    }
    return 0;
}