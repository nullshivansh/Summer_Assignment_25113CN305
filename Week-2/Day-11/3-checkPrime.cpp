//Write a program to Write function to check prime.
#include<iostream>
using namespace std;

int checkPrime( int n ){
bool isPrime = true;
    if( n <= 1 ){
        isPrime = false;
    }
    for ( int i = 1; i <= (n/2) ; i++){
        if ( n % i == 0 ){
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    if( checkPrime(n) ){
        cout<<n<<" is a prime number."<<endl;
    }
    else
    cout<<n<<" is not a prime number."<<endl;
}