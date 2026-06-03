/*Write a program to Print prime numbers in a range.*/
#include<iostream>
using namespace std;
int main(){
    int start;
    int end;

    cout<<"Enter start of the range"<<endl;
    cin>>start;
    cout<<"Enter end of the range"<<endl;
    cin>>end;

    for( int i=start ; i <= end; i++ ){
        bool isPrime=true;
        
        for( int y =2 ; y <= (i/2); y++){
            if ( i%y == 0){
                isPrime=false;
                break;
            }
        }
        if (isPrime){
            cout<<i<<"\t";
        }
    }

}