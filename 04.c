//4. Write a program to compare two no by using the ternary operator in c.

#include<stdio.h>

int main(){
    int a,b;
    printf("enter the two numbers :\n");
    scanf("%d%d",&a,&b);
    a==b?printf("both are equal: %d",a):printf("both are not equal%d,%d",a,b);
}