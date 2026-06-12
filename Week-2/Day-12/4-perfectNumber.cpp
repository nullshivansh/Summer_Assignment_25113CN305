//Write a program to Write function for perfect number.
#include<iostream>
using namespace std;

int perfectNum ( int n ){
    int sum = 0;
    for ( int i = 1; i <= (n/2) ; i++ ){
        if ( n % i == 0 ){
            sum = sum + i;
        }
    }
    if ( n == sum ){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>> n;

    if ( perfectNum( n ) ){
        cout<<n<< " is a perfect number."<<endl;
    }
    else{
        cout<<n<<" is not a perfect number."<<endl;
    }
}