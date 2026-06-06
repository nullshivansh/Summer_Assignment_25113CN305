//Write a program to Find x^n without pow().
#include<iostream>
using namespace std;

int power( int a, int b ){
    int PowTemp = 1;

    for ( int i =1 ; i <= b ; i++ ){
        PowTemp = PowTemp * a ;
    }
    return PowTemp;
}
int main(){
    int a,b;
    cout << "Enter Base : ";
    cin>>a;
    cout<<"Enter power : ";
    cin>>b;
    int Power = power( a, b );
    cout<<Power<<endl;
}