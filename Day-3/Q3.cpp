//Write a program to Find GCD of two numbers. 
#include<iostream>
using namespace std;
int main(){

    int A,B;
    
    cout<<"Enter smaller number"<<endl;
    cin>>A;
    cout<<"Enter larger number"<<endl;
    cin>>B;
    
    int gcd;
    for (int i =1; i <= A; i++ ){
        if ( (A%i==0) && (B%i==0)){
            gcd = i;
        }
    }
    cout <<"THE GCD IS : "<<gcd<<endl;
}