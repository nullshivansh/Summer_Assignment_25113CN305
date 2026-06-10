//Write a program to Write function to find factorial.
#include<iostream>
using namespace std;

int factorial( int n ){
    if( n < 0 ){
        return 0;
    }
    if ( n == 1 || n == 0 ){
        return 1;
        }
    else
    return n*factorial( n -1 );
}

int main(){
    int m;
    cout<<"Enter a number : ";
    cin>>m;

    if ( factorial(m) )
    cout<<"Factorial is : "<<factorial( m )<<endl;
    else 
    cout<<"Not a valid number."<<endl;
}