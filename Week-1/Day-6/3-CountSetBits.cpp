//Write a program to Count set bits in a number 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number to count set bits : ";
    cin>>n;
    int count = 0;
    while ( n != 0 ){
        int bit  = n & 1;
        if (bit){
            count++;
        }
        n = n>>1;
    }
    cout <<"The answer is : "<<count<<endl;
}