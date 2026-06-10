//Write a program to Write function to find maximum. 
#include<iostream>
using namespace std;

int max ( int a , int b ){
    if( a > b ){
        return a;
    }
    if (a < b){
        return b;
    }
    else
    return 0;
}

int main(){
    int a,b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;

    if(max(a,b)){
        cout<<"Maximum number is : "<<max(a,b)<<endl;
    }
        else
        cout<<"Both numbers are equal"<<endl;
    
}