// Write a program to Check strong number. 
#include<iostream>
using namespace std;
int fact( int n ){
    if ( n == 1 || n == 0){
        return 1;
    }
    int factorial = n * fact( n-1 );
    return factorial;
}

int main(){
    
    int n;
    cout <<"Enter a number to check strong number."<<endl;
    cin>>n;
    int original = n;
    int sum = 0;
    while ( n > 0 ){
        int temp = n%10;
        int dgtFact = fact(temp);
        sum = sum + dgtFact;
        n = n/10;
    }
    if ( original == sum){
        cout << original << " is a strong number."<<endl;
    }
    else {
        cout << original << " is not a strong number."<<endl;
    }
}