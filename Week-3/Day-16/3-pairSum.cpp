//Write a program to Find pair with given sum.
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

    int targetSum;
    cout << "Enter the target sum : ";
    cin >> targetSum;

    bool pairFound = false;

    cout << "\nPairs having sum "<< targetSum << " are :" << endl;

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == targetSum)
            {
                cout << arr[i]<< " + " << arr[j] << " = " << targetSum << endl;
                pairFound = true;
            }
        }
    }

    if(pairFound == false)
    {
        cout << "No Pair Found";
    }

    return 0;
}
