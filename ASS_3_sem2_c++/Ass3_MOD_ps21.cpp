#include <iostream>
#include <climits> 
#include <iomanip> 
using namespace std;

int main()
{
    int num;
    int count = 0;
    int sum = 0;
    int maxVal = INT_MIN; 
    int minVal = INT_MAX; 

    cout << "Enter positive integers one by one (-1 to terminate):" << endl;

    while (true)
    {
        cout << "Enter a number: ";
        cin >> num;
        if (num == -1)
        {
            break;
        }
        if (num < 0)
        {
            cout << "Please enter a positive integer." << endl;
            continue;
        }
        count++;
        sum += num;

        if (num > maxVal)
        {
            maxVal = num;
        }
        if (num < minVal)
        {
            minVal = num;
        }
    }

    if (count > 0)
    {
        double average = (double)sum / count;
        cout << "\nOutput:" << endl;
        cout << "Count = " << count << endl;
        cout << "Maximum = " << maxVal << endl;
        cout << "Minimum = " << minVal << endl;
        cout << "Average = " << fixed << setprecision(2) << average << endl;
    }
    else
    {
        cout << "No numbers were entered." << endl;
    }

    return 0;
}