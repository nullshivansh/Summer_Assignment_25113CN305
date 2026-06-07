// Write a program to Recursive Fibonacci.
#include<iostream>
using namespace std;
int fibonacci ( int n ){
    if ( n == 1 ) 
        return 1;
    if ( n == 0 )
    return 0;
    
    return fibonacci ( n - 1 ) + fibonacci ( n - 2 );
}

int main(){
    int n;
    cout <<"Enter the term of fiboacci series : ";
    cin>> n;
    cout <<"The required series is :"<<endl;
    cout << "0\t";
    for( int i = 1; i < n ; i++ ){
        cout<< fibonacci ( i ) <<"\t";
    }
}