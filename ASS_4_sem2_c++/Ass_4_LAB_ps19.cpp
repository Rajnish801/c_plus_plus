#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    int arr[6] = {5, 10, 15};
    int* p = arr;
    for (int i = 0; i < 5; i++)
    {
        sum += *(p + i);
    }
    
    cout<<"The sum of the array is :"<<sum <<endl;  
    return 0;
}