/* Write a program to Print number pyramid. 
    1 
   121 
  12321 
 1234321 
123454321  */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    for ( int row = 1; row <= n; row++ ){
        
        //space
        int space = n - row;
        for (int i = 1; i <= space ; i++){
            cout<<" ";
        }
        //number
        for ( int j = 1; j <= row; j++){
            cout<<j;
        }
        //revNumber
        int revNum = row - 1;
        for( int k = revNum; k >= 1; k--){
            cout<<k;
        }
        cout<<endl;
    }
}