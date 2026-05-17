#include<iostream>
using namespace std;
int main(){
    int n = 7;
    int arr[7] = {1, 3, 3 ,4 , 4, 6 , 7};
    int* p = arr;
    cout<<"Last elemnet of Arrya is :"<<*(arr + (n - 1)) <<endl;
    
    

    return 0;
}