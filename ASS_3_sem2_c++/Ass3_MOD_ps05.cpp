#include<iostream>
using namespace std;

int main () {
    int n, s = 0; 
    cout << "Enter the number: ";
    cin >> n;
    int temp = n; 
    while (temp != 0) {
        s = s + temp % 10;  
        temp /= 10;      
    }
    cout << "The sum of the digits of " << n << " is: " << s << endl;
    
    return 0;
}