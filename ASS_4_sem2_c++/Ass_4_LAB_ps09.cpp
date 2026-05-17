#include <iostream>
using namespace std;

int main() {
    int x = 100;
    double y = 50;
    
    int* pe = &x;
    double* pq = &y;
    

    cout << "The value stored in x is: " << *pe << endl;
    cout << "The value stored in y is: " << *pq << endl;
    
    return 0;
}