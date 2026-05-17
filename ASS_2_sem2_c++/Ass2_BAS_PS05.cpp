#include <iostream>
using namespace std;

int main() {
    int age;
    cout<<"Enter the AGE:"<<" ";
    cin>>age;
    cout<<endl;
    if (age>=18)
    {
        cout<<"You are  eligible for Vote"<<"\n";
    }else{
        cout<<"You are not eligible for Vote"<<"\n";
    }
    

    return 0;
}