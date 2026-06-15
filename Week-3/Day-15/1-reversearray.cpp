//Write a program to Reverse array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of the array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements of the array :"<<endl;
    for(int i = 0; i < n ; i++ ){
        cin>>arr[i];
    }

    cout<<"The reverse array is : "<<endl;
    int start = 0;
    int last = n-1;
    while( start < last ){
        int temp = arr[last];
        arr[last] = arr[start];
        arr[start] = temp;
        start++;
        last--;
    }
    cout<<"[ ";
    for( int i =0; i <n ; i++ ){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
}