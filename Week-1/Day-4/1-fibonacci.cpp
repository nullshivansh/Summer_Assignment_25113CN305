// Write a program to Generate Fibonacci series.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of term of fibonacci series"<<endl;
    cin>>n;
    cout<<"The fibonacci series is : "<<endl;
    int fst = 0;
    int snd = 1;

        if ( n > 2 ){
            cout<<fst<<"\t"<<snd<<"\t";
            for ( int i =1 ; i < (n-1) ; i++){
                int fibonacci = fst + snd;
                fst = snd;
                snd = fibonacci;

                cout<<fibonacci<<"\t";
            }
        }
        else if(n=1){
                cout<<fst;
        }
        else if(n=2){
            cout<<fst<<"\t"<<snd;
        }
        else{
            cout<<"Not valid";
        }
}
