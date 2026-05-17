#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1, 3, 3 ,4 , 4};
    int* p = arr;
    for (int i = 0; i < 5; i++, p++)
    {
        cout<<" *p = "<<*p <<endl;
    }
    

    return 0;
}