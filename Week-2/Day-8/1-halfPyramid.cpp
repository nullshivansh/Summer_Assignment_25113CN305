//Write a program to Print half pyramid pattern. 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    for ( int i = 1; i <= n ; i++){
        for ( int y = 1 ; y <= i ; y++ ){
            cout<<"*";
        }
        cout<<endl;
    }
}