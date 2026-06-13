//Write a program to Find sum and average of array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];

    cout<<"Enter elements of the array : "<<endl;
    
    int sum = 0;
    for(int i = 0 ; i < n ; i++ ){
        cin>>arr[i];
        sum += arr[i];
    }
    int average = sum/n;
    cout<<"Sum is : "<< sum <<endl;
    cout<<"Average is : "<< average <<endl;
}