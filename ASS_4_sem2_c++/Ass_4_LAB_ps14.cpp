#include<iostream>
using namespace std ;
int main(){
    int x = 3 , y = 4 , z = 6;
    int* ptrs = {x , y , z };
    for ( int i = 0; i < 3; i++)
    {
        cout<<"Address of the pointer :"<<ptrs[i]<< " "<<" The value store in that address"<<*ptrs[i]<<endl
    }
    
    return 0 ;
}