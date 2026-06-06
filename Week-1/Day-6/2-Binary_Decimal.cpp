//Write a program to Convert binary to decimal.
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int binary;
    cout<<"Enter the number in binary : ";
    cin>>binary;
    int decimal = 0;
    int x = 0;
    while(binary > 0 ){
        int temp = binary % 10;
        decimal = decimal + temp*round(pow( 2, x));
        x++;
        binary = binary / 10;
        }
    cout<<decimal<<endl;

}