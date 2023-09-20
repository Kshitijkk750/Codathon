//11.Write a program to Calculate Product of Digits of a Number.
#include<iostream>
using namespace std;
int main(){
    int n,c,p=1;
    cout<<"enter the number :\n";
    cin>>n;
    while(n>0){
        c=n%10;
        p=p*c;
        n=n/10;
    }
    cout<<p;

}