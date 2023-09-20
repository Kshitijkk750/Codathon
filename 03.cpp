//3. Write a program to Print Prime Numbers between Two numbers.

#include<iostream>

using namespace std;

int main(){
    int a,b,s=0,k=0;
    cout<<"Enter the two numbers :\n";
    cin>>a>>b;
    //for first number.
    for(int i=2;i<=a;i++){
        if(a%i==0){
            s++;
        }
        
    }
    if(s>=2){
        cout<<" First number is not prime.\n";
    }
    else{
    cout<<" first number is prime..\n";
    }
    //for second nu.
    for(int i=2;i<=b;i++){
        if(b%i==0){
            k++;
        }
        
    }
    if(k>=2){
        cout<<" second number is not prime.\n";
    }
    else{
    cout<<" second number is prime..\n";
    }
}