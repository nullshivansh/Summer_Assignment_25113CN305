/*Write a program to Print reverse pyramid. 
********* 
 ******* 
  ***** 
   *** 
    * */
   #include<iostream>
   using namespace std;
   int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>> n;
        
        for ( int rows = n ; rows >= 1 ; rows--){
            int space = n - rows;
            for(int i = 1; i <= space ; i++){
                cout<<" ";
            }
            int star = 2*rows - 1;
            for( int y = 1 ; y <= star; y++){
                cout<<"*";
            }
            cout<<endl;
        }

    }
   