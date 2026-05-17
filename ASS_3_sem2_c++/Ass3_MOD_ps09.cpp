#include<iostream>
using namespace std;
int main (){
int limit = 10;
int skipValue = 5;
int stopValue = 8;

cout << "Looping from 1 to " << limit << endl;

for (int i = 1; i <= limit; i++) {
    if (i == skipValue) {
        cout << "Skipping number " << i << " using 'continue'." << endl;
        continue; 
    }
    if (i == stopValue) {
        cout << "Breaking the loop at " << i << " using 'break'." << endl;
        break; 
    }
    cout << "Current number: " << i << endl;
}

cout << "Loop terminated.";
    return 0;
}