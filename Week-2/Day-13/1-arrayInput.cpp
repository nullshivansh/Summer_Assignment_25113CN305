// Write a program to Input and display array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements of array : ";
    cin>>n;
     int arr[n];
     cout<<"Enter elements :"<<endl;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    for(int y = 0 ; y < n ; y++){
        cout<<arr[y]<<" ";
    }
    return 0;
}