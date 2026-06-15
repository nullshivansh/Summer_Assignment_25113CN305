//Write a program to Find duplicates in array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of the array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements of the array : "<<endl;
    for( int i = 0; i < n; i++ ){
        cin>>arr[i];
    }
    cout<<"The dublicate elements are : "<<endl;
    for( int i = 0; i < n; i++ ){
        for( int y = i+1; y < n; y++ ){
            if( arr[i] == arr[y] ){
                cout<<arr[i]<<"\t";
                break;
            }
        }
    }
}