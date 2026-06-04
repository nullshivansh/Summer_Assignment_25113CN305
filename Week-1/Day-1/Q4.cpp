#include<iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter a number"<<endl;
    cin>>N;
    int d=N;
    int i=0;
    int digit;
    while(d>0)
    {
        d=d/10;
        i++;
    }
   cout<<"Number of digits in the provided number are : "<< i <<endl;
}