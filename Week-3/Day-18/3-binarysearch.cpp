#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;

    int arr[100];
    cout << "Enter sorted array elements : ";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    cout<< "The Sorted Entered Array is as follows:  " << endl;
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

    int key;
    cout << "Enter element to search : ";
    cin >> key;

    int low = 0;
    int high = n - 1;

    bool found = false;

    while(low <= high)
    {
        int mid = (low + high) / 2;
        if(arr[mid] == key)
        {
            found = true;
            break;
        }
        else if(arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if(found)
    {
        cout << "The Element is Found";
    }
    else
    {
        cout << "The Element is Not Found";
    }

    return 0;
}