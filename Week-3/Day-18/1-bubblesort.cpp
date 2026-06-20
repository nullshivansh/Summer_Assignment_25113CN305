#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size of array : ";
    cin >> n;

    int arr[100];
    cout << "Enter array elements : ";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    cout<< "The entered array is as follows:  " << endl;
    cout << "[";
    for (int i = 0; i < n ; i++)
    {
        cout <<  arr[i] ;
        if(i != n - 1)
        {
            cout << ",";
        }
    }
    cout << "]";
    cout << " " << endl;

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout << " The Sorted Array is : [";

    for(int i=0;i<n;i++)
    {
        cout << arr[i];

        if(i != n-1)
        {
            cout << ",";
        }
    }
    cout << "]";

    return 0;
}