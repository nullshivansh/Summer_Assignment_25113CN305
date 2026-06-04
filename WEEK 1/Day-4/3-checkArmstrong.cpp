#include<iostream>
using namespace std;

int countdigit ( int n ){
    int dgt = 0;
    while ( n > 0 ){
       n = n/10;
        dgt++;
    }
    return dgt;
}

int main (){
    
    int n;
    cout << "Enter the number : "<< endl;
    cin>>n;
    int dgt = countdigit(n);
    int original = n;
    int result = 0;
    int temp;

    cout <<"The number has "<< dgt<<" digits."<<endl;
    
    while(n>0) {
        temp = n%10;
       int power = 1;
        for ( int i = 1; i <= dgt; i++){
            power = power*temp;
        }
        n = n / 10; 
        result = result + power;
    }

    if( original == result){
        cout << original << " is an armstrong number."<<endl;
    }
    else {
        cout << original << " is not an armstrong number."<<endl;
    }
}