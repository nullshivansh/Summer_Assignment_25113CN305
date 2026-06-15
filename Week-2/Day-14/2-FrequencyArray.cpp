//Write a program to Frequency of an element.
#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter size of the array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements of the array :"<<endl;
    for(int i = 0; i < n; i++ ){
        cin>>arr[i];
    }
    
    int x;
    cout<<"Enter element to find frequency : ";
    cin>>x;

    int count = 0;
    for( int y = 0; y < n; y++ ){
        if( arr[y] == x ){
            count++;
        }
    }
    cout<<"The frequency of the following element is : "<< count <<endl;
}