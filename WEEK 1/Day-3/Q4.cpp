//Write a program to Find LCM of two numbers. 
#include<iostream>
using namespace std;
int main(){
int a,b;
int lcm;
int hcf;

cout<<"Enter smaller number"<<endl;
cin>>a;
cout<<"Enter larger number"<<endl;
cin>>b;

for ( int i =1; i <= a; i++){
    if ( (a%i==0) && (b%i==0)){
        hcf = i;
    }
}    
    lcm = (a*b)/hcf;
cout <<"The LCM is "<<lcm<<endl;
}