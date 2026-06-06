// Write a program to Convert decimal to binary. 
#include<iostream>
using namespace std;

int power( int a, int b ){
    int PowTemp = 1;

    for ( int i =1 ; i <= b ; i++ ){
        PowTemp = PowTemp * a ;
    }
    return PowTemp;
}

int main(){
    int n;
    cout <<"Enter a number to conver into binary : ";
    cin>>n;

    int i = 0;
    int ans = 0;
    
    while ( n != 0 ){
        
        int bit = n & 1 ;
        ans = ans + bit*power( 10 , i );
        n = n >> 1;
        i++;

    }
    cout<<"The answer is : "<< ans <<endl; 
}