// Write a program to Print factors of a number. 
#include<iostream>
using namespace std;

int checkprime(int n ){
    bool isPrime = true;
    if ( n <= 1){
        isPrime = false;
    }
    else{
        for ( int i =2 ; i < n ; i++ ){
            if ( n % i == 0 ){
                isPrime = false;
                break;
            }
        }
    }
    if( isPrime ){
        cout << n << "\t";
    }
}

int main(){
    int N;
    cout << "Enter the number to check its prime factors"<<endl;
    cin>>N;

    for ( int i = 1; i <= N ; i++){
        if ( N %i == 0){
            checkprime( i );
        }
    }
}