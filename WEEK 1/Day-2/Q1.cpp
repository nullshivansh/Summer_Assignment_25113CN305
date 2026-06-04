//Write a program to Find sum of digits of a number.
 #include<iostream>
 using namespace std;
    int main()
    {
      int N,temp;
      int sum=0;
      cout<<"Enter a number"<<endl;
      cin>>N;

      while(N>0){
         temp=N%10;
         sum = sum + temp;
         N=N/10;
      }
      cout<<"Sum of the digits is :"<<sum<<endl;
    }