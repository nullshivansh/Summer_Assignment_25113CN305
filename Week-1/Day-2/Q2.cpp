//Write a program to Reverse a number.
#include<iostream>
using namespace std;
int main(){
int N,temp;
int rev = 0;
    cout<<"Enter a number of your choice"<<endl;
    cin>>N;
    while(N>0){
        temp=N%10;
        rev = rev*10 + temp;
        N = N/10;
    }
    cout<<"The reversed number is :"<<endl<<rev;
}