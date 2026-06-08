/*Write a program to Print reverse star pattern. 
***** 
**** 
*** 
** 
* */
#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    for ( int i = 1 ; i <= n ; i++){
        for (int y = 1 ; y <= n-i+1 ; y++){
            cout <<"*";
        }
        cout<<endl;
    }
}