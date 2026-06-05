// Write a program to Find largest prime factor.
#include<iostream>
using namespace std;
int main(){
    int n;
    int Factor;
    bool isPrime;
    cout<< "Enter the number to get its largest prime factor"<<endl;
    cin>>n;
    for (int i = 2 ; i <= n ;i++){
    
        if ( n % i == 0){
            isPrime = true;
            for ( int y = 2 ; y < i ; y++){
                if ( i % y == 0 ){
                    isPrime = false;
                    break;
                    }
                }
            if ( isPrime ){
                Factor = i;
            }
            }
        }    
    cout <<"Largest factor is : "<<Factor<<endl;
}