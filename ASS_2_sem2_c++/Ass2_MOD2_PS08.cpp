#include <iostream>
using namespace std;

int main() {
    int s1, s2, s3;
    cout<<"Enter the value of side 1:";
    cin >> s1 ;
    cout<<"Enter the value of side 2 :";
    cin >> s2 ;
    cout<<"Enter the value of side 3:";
    cin >> s3 ;

    if (s1 == s2) {
        if (s2 == s3) cout << "Equilateral";
        else cout << "Isosceles";
    } else {
        if (s1 == s3 || s2 == s3) cout << "Isosceles";
        else cout << "Scalene";
    }
    return 0;
}