//1. Write a program to find the cube of a number use loop.

#include<stdio.h>
 int main(){
    int n,ans,temp;
    printf("Enter the number :\t");
    scanf("%d",&n);
    for(int i=1;i<=2;i++){
        ans=n*n;
        temp=ans*n;
    }
    printf("\n%d",temp);
 }