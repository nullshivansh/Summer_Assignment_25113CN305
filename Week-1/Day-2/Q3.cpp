//Write a program to Find product of digits. 
#include<iostream>
using namespace std;
int main(){
    int n,temp;
    int prod = 1;
    cout<<"Enter a number of your choice"<<endl;
    cin>>n;

    while(n>0){
        temp = n%10;
        prod = prod*temp;
        n = n/10;
    }
    cout<<"Product of the digits of the given number is :"<<endl<<prod;
}