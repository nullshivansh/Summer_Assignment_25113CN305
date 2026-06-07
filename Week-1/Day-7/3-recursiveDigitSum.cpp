// Write a program to Recursive sum of digits. 
#include<iostream>
using namespace std;

int sumDigits( int n ){
    if ( n == 0 ){
        return 0;
    }
    int temp = n % 10;
    return temp + sumDigits( n / 10 );
}

int main (){
    
    int n;
    cout << "Enter a number to find sum of digits : ";
    cin>>n;
    int sum = sumDigits( n );
    
    cout <<"Sum of digits is : "<< sum <<endl;
}