// Write a program to Recursive factorial.
#include<iostream>
using namespace std;

int fact ( int n ){
    if ( n == 0 ){
        return 1;
    }
    while( n > 0 ){
        return n * fact ( n -1 );
    }
}

int main(){
    int n;
    cout<<"Enter a number to find its factorial : "<<endl;
    cin>>n;
    int factorial = fact ( n );
    cout << n << "! = "<< factorial <<endl;

}