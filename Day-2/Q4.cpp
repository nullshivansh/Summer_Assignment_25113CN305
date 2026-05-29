//Write a program to Check whether a number is palindrome
#include<iostream>
using namespace std;
int main(){
    int n,temp,org;
    int rev = 0;
    cout<<"Enter a number of your choice"<<endl;
    cin>>n;
    org = n;

    while(n>0){
        temp = n%10;
        rev = rev*10 + temp;
        n = n/10;
    }
    if (org == rev){
        cout<<"The given number is a palindrome";
    }
    else{
        cout<<"The given number is not a palindrome number";
    }
   
}