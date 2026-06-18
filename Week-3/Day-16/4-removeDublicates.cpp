//Write a program to Remove duplicates from array.
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

        if(i != n - 1)
        {
            cout << ",";
        }
    }
    cout << "]" << endl;

    cout << "\nArray after removing duplicates : [";

    bool firstElement = true;

    for(int i = 0; i < n; i++)
    {
        bool duplicate = false;

        for(int j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                duplicate = true;
                break;
            }
        }

        if(!duplicate)
        {
            if(!firstElement)
            {
                cout << ",";
            }

            cout << arr[i];
            firstElement = false;
        }
    }

    cout << "]" << endl;

    return 0;
}