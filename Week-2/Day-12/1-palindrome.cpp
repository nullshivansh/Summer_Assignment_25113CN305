//Write a program to Write function for palindrome.
#include<iostream>
using namespace std;

int palindrome ( int n ){
    int org = n;
    int sum = 0;
    while( n > 0 ){
        int temp = n%10;
        sum = sum*10 + temp;
        n = n/10;
    }
    if( org == sum ){
        return 1;
    }
    else return 0;
}

int main(){
    int a;
    cout<<"Enter a number to check palindrome : ";
    cin>>a;
    if ( palindrome( a ) ){
        cout<<a<<" is a palindrome number."<<endl;
    }
    else
    cout<<a<<" is not a palindrome number."<<endl;
}