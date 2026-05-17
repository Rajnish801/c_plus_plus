#include<iostream>
using namespace std;
int main(){
    int* Alloaction = new int(89);
    cout<<"Alloaction value :"<<*Alloaction <<endl;
    delete Alloaction;
    Alloaction = nullptr;
    cout<<"Memory get cleared "<<endl;


    return 0;
}