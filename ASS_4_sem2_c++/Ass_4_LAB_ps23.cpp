#include<iostream>
using namespace std;
int main(){
    // int* leak = new int(100);
    // cout << "Leaked value: " << *leak << endl;

    // --- Corrected version --
    int* fixed = new int(200);
    cout << "Corrected value: " << *fixed << endl;
    delete fixed;
    fixed = nullptr;
    cout << "Memory freed correctly." << endl;


    return 0;
}