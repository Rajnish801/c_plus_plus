#include<iostream>
using namespace std;
int main(){
    int n;
cout << "Enter number of elements (max 20): ";
cin >> n;

int arr[20];
cout << "Enter elements: ";
for(int i = 0; i < n; i++) {
    cin >> *(arr + i); 
}

int* p = arr;
int max_val = *p; 

for(int i = 1; i < n; i++) {
    if(*(p + i) > max_val) {
        max_val = *(p + i);
    }
}
cout << "Maximum element is: " << max_val << endl;
    return 0 ;
}