/* Write a program to Print repeated-number 
pattern. 
1 
22 
333 
4444 
55555 */
#include<iostream>
using namespace std;
int main (){
    int n;
    cout << "Enter the number of rows : ";
    cin>>n;
    for (int i = 1 ; i <= n ; i++){
        for ( int y = 1 ; y <= i; y++){
            cout<<i;
        }
        cout<<endl;
    }
}