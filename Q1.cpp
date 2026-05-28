//Write a program to Calculate sum of first N natural numbers.//
#include <iostream>
using namespace std;
int main(){
int N;
cout<<"Enter a number to calculate sum of numbers"<<endl;
cin>>N;
int i = 1;
int sum=0;
while(i<=N){
    sum += i;
    i++;
}
cout<<sum<<endl;
}