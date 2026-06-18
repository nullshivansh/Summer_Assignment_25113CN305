//Write a program to Find missing number in array
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[100];

    cout << "Enter " << n - 1 << " elements: ";

    int actualSum = 0;

    // taking sum of the input array to compare with the expected sum
    cout<<"enter the array :";
    for(int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
        actualSum += arr[i];
    }

    cout<< "the entered array is :";
    cout << "[";
    for (int i = 0; i < n-1; i++)
    {
     cout << arr[i];  
    }
    cout << "] " << endl;
    

    int expectedSum = n * (n + 1) / 2;

    int missingNumber = expectedSum - actualSum;

    cout << " the missing Number is  = " << missingNumber;

    return 0;
}