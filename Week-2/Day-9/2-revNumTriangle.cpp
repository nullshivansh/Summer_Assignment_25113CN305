/*Write a program to Print reverse number triangle.  
12345 
1234 
123 
12 
1 */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    for ( int i = 1 ; i <= n ; i++ ){
        for ( int y = 1 ; y <= n - i +1 ; y++ ){
            cout<<y;
        }
        cout<<endl;
    }
}