// Write a program to Print Armstrong numbers in a range.
#include<iostream>
using namespace std;

int countdigit ( int n ){
    int dgt = 0;
    while ( n >0 ){
        n = n / 10;
        dgt++;
    }
    return dgt;
}
int main (){
    int start,end;
    
    cout<< "Enter the start of the range"<<endl;
    cin>>start;
    cout<<"Enter the end of the range"<<endl;
    cin>>end;

    for( int i=start ; i <= end ; i++){
        int digit = countdigit(i);
        int result = 0;
        int temp;
        int check = i;
        int temp_i = i;
            while ( temp_i > 0){
                temp = temp_i%10;
                int power = 1;
                    for ( int y = 1 ; y <= digit ; y++){
                        power = power * temp;
                    }
                result = result + power;
                temp_i = temp_i / 10;
            }
        if ( check == result){
            cout << check << "\t";
        }

    }
}