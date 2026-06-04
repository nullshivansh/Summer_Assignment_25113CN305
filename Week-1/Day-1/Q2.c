//Write a program to Print multiplication table of a given number.//
#include<stdio.h>
int main(){
    int N, i=1;
    int prod=1;
    printf("Enter a number");
    scanf("%d",&N);
    printf("The table of the given number is:\n");
    while(i<=10){
       prod = N*i;
        printf("%d * %d = %d\n",N,i,prod);
        i++;

    }

}