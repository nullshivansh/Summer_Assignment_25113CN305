// Write a program to Find largest and smallest element.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements : "<<endl;
    for ( int i = 0; i < n ; i++ ){
        cin>>arr[i];
    }
    int large, small;
    large = arr[0];
    small = arr[0];

    for( int y = 0 ; y < n ; y++ ){
        if ( arr[y] > large ){
            large = arr[y];
        }
        if ( arr[y] < small ){
            small = arr[y];
        }
    }
    cout<<"The largest number is : "<<large<<endl;
    cout<<"The smallest number is : "<<small<<endl;
}