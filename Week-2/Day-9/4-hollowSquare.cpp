/*Write a program to Print hollow square 
pattern. 
***** 
*   * 
*   * 
*   * 
*****  */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    for (int i = 1 ; i<=n; i++){
        for ( int y = 1; y <= n; y++){
            if ( i == 1 || i == n || y == 1 || y == n )
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
}