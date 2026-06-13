// Write a program to Count even and odd elements.
#include<iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    int even = 0;
    cout<<"Enter the elements of the array :"<<endl;
    for(int i = 0; i < n ; i++ ){
        cin>>arr[i];
        if (arr[i] % 2 == 0){
            even++;
        }
    }
    int odd = n - even;
    cout<<"Even numbers are "<<even<<" and odd numbers are "<<odd<<endl;
}