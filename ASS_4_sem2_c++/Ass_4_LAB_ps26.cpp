#include<iostream>
using namespace std;
int main(){
    int arr[] = {11, 12, 13, 14, 16, 17};
    int n = 6;
    int count = 0;  
    int* p = arr;   

    for(int i = 0; i < n; i++) {
    if(*(p + i) % 2 == 0) {
        count++;
    }
}
cout << "Number of even elements: " << count << endl;
    return 0 ;
}