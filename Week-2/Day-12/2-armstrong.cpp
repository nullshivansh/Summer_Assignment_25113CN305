// Write a program to Write function for Armstrong.
#include<iostream>
using namespace std;

int power ( int a , int b ){
    int pow = 1;
    for( int i =1 ; i <= b ; i++ ){
        pow = pow*a;
    }
    return pow;
}
int armstrong ( int n ){
    int digit = 0;
    int temp = n;
    int org = n;
    while ( temp > 0 ){
        temp = temp/10;
        digit++;
    }
    int sum = 0;
    for( int k = 1; k <= digit ; k++ ){
    int tempdgt = n%10;
    sum = sum + power ( tempdgt , digit );
    n = n / 10;
    }
    if( org == sum ){
        return 1;
    }
    else {
        return 0;
    }
}

int main(){
    int n;
    cout<<"Enter a number to check armstrong : ";
    cin>>n;

    if ( armstrong( n ) ){
        cout<<n<<" is an armstrong number."<<endl;
    }
    else{
        cout<<n<<" is not an armstrong number."<<endl;
    }
}