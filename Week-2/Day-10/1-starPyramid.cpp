/*Write a program to Print star pyramid. 
    * 
   *** 
  ***** 
 ******* 
********* */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    for( int row = 1 ; row <= n ; row++){

        int space = n - row;
        for (int j = 1 ; j <= space ; j++){
            cout<<" ";
        }
        int star = 2*row - 1;
        for ( int k = 1 ; k <= star; k++){
            cout<<"*";
        }
        cout<<endl;
    }
}