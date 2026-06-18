//Write a program to Find maximum frequency element.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[100];
    cout << "Enter the array elements : ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The entered array is : [";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i];
        if(i != n-1)
        {
            cout << ",";
        }
    }
    cout << "]" << endl;

    int maxFrequency = 0;
    int maxFrequencyElement = arr[0];

    for(int i = 0; i < n; i++)
    {
        int count = 0;
        for(int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        if(count > maxFrequency)
        {
            maxFrequency = count;
            maxFrequencyElement = arr[i];
        }
    }

    cout << "Maximum Frequency Element is  = " << maxFrequencyElement << endl;

    cout << " The Frequency of maximum frequent element is = " << maxFrequency;

    return 0;
}