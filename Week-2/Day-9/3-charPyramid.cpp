/*Write a program to Print repeated character 
pattern. 
A 
BB 
CCC 
DDDD 
EEEEE */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    char ch = 65;
    for ( int i = 1; i <= n; i++){
        for (int y = 1; y <= i ; y++){
            cout<<ch;
        }
        cout<<endl;
        ch++;
    }
}