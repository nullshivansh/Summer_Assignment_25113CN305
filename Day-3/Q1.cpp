#include<iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter a number"<<endl;
    cin>>N;

    bool isPrime = true;

    if(N <= 1){
            isPrime = false;
    }
    for(int i=2; i<=(N/2); i++){
        if( N%i == 0){
            isPrime=false;
        break;
        }
    }
    if(isPrime)
        cout<<N<<" is a Prime number"<<endl;
    else
    cout<<N<< " is not a Prime number"<<endl;
}