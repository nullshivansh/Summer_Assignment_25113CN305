/* Write a program to Print number triangle. 
1 
12 
123 
1234 
12345 */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    for ( int i = 1; i <= n ; i++ ){
        for ( int y = 1 ; y <= i ; y++ ){
            cout<<y;
        }
        cout<<endl;
    }
}