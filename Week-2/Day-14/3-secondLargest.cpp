// Write a program to Second largest element.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of the array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements of the array :"<<endl;
    for( int i = 0; i < n; i++ ){
        cin>>arr[i];
    }
    
    int large = arr[0];
    int secondlarge = arr[0];

    for(int y = 0; y < n ; y++ ){
        if( arr[y] > large ){
            secondlarge = large;
            large = arr[y];
        }
    }
    cout<<"Largest is "<< large <<" and second largest is "<< secondlarge <<endl;
}