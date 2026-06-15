//Write a program to Linear search.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements :"<<endl;
    for(int i = 0 ; i < n ; i++ ){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter number to search : ";
    cin>>x;
    int index;
    int search = 0;
    for ( int y = 0; y < n ; y++){
        if ( x == arr[y] ){
            search++;
            index = y;
            break;
        }
    }
    if ( search ){
        cout<<"The number is found at index : "<< index <<endl;
    }
    else
    cout<<"The number is not found"<<endl;
}