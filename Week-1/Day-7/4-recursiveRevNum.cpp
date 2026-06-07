// Write a program to Recursive reverse number. 
#include<iostream>
#include<cmath>
using namespace std;

int revNum ( int n ){
    if ( n == 0 ){
        return 0;
    }
    int count = 0;
    int org = n;
    int temp = n % 10;
    while ( n > 0 ){
        n = n / 10;
        count++;
    }
    return temp*pow( 10 , (count-1) ) + revNum( org / 10 );
}
int main (){
    int n;
    cout<<"Enter a number to reverse : ";
    cin>>n;
    cout<<"The answer is : "<<revNum( n )<<endl;
}