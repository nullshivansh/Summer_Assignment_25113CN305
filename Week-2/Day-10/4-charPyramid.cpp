/* Write a program to Print character pyramid. 
    A 
   ABA 
  ABCBA 
 ABCDCBA 
ABCDEDCBA */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    for ( int row = 1; row <= n; row++){

        //space
        int space = n - row;
        for( int i = 1 ; i <= space ; i++){
            cout<<" ";
        }

        //character
        char ch = 65;
        for( int j = 1; j <= row; j++){
            cout<<ch;
            ch++;
        } 
        //revCharacter;
         ch = ch-2;
        for( int k = 1; k <= row - 1; k++){
            cout<<ch;
            ch--;
        } 
        cout<<endl;
    }
}