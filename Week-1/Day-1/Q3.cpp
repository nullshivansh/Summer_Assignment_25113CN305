//Write a program to Find factorial of a number. 
#include<iostream>
using namespace std;
int main(){
 int N;
 cout<<"Enter a number"<<endl;
 cin>>N;
  int i = N;
 int fact =1;
    while(i>=1){
    fact = fact*i;
    i--;
    }
    cout<<fact<<endl;
}