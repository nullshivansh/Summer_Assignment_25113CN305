//Write a program to Write function for fibonacci
#include<iostream>
using namespace std;

int fibonacci( int n ){
    if( n == 1){ return 1;}
    if ( n == 0 ){return 0;}
    for( int i = 1; i <= n ; i++){
    return fibonacci( n-1 ) + fibonacci ( n-2);
    }
}

int main(){
    int m;
    cout<<"Enter a number : "<<endl;
    cin>>m;
cout<<"The required term of the fibonacci is : "<< fibonacci( m ) <<endl;
}