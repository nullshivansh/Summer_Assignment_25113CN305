#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter size of the array : ";
    cin >> n;

    int arr[n];
    cout<<"Enter the elements :"<<endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int temp = arr[0];
    for(int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    cout<<"[ ";
    arr[n - 1] = temp;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<"]";
}