#include<iostream>
using namespace std;
int main (){
    int Marks;
    cout<<"Enter the Marks to see your Grade:"<<"\n";
    cin>>Marks;
    if (Marks>=90)
    {
        cout<<"Your grade is A";
    }else if (Marks>=80)
    {
        cout<<"Your grade is B";
    }else if (Marks>=70)
    {
        cout<<"Your grade is C";
    }else if (Marks>=60)
    {
        cout<<"your grade is D";
    }else{
        cout<<"Your grade is F";
    }
    
    
    
    
    return 0;
}