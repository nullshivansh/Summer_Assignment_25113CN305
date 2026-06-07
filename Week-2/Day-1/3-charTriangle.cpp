/* Write a program to Print character triangle. 
A 
AB 
ABC 
ABCD 
ABCDE */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;

    for( int i = 1 ; i <= n ; i++){
        char ch = 65;
        for (int y = 1 ; y <= i ; y++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
}
