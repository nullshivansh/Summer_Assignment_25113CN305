// Write a program to Find nth Fibonacci term.
#include<iostream>
using namespace std;

int fibonacci ( int n ){   
    int fst = 0;
    int snd = 1;
    int fib = 0;
    
    for ( int i = 2 ; i < n ; i++){
        fib = fst + snd;
        fst = snd;
        snd = fib;
    }
    cout << "The required term is : "<< fib <<endl;
}


int main(){
    int n;
    cout << "Enter the term of fibonacci series"<<endl;
    cin>>n;
    if(n == 1){
        cout << " The required term is : 0 "<<endl;
    }
    else if ( n == 2){
        cout << "The required term is : 1"<<endl;
    }
    else if ( n > 2){
       
        fibonacci ( n );
    }
}
