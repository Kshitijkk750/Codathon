//6. Write a program to print EVEN numbers from 1 to N using a while loop.

#include<iostream>
using namespace std;

int main(){
    int n,i=1;
    cout<<"Enter the range :\n";
    cin>>n;

    while(i<=n){
        if(i%2==0){
            cout<<i<<" ";
            i++;
        }
        else{
            cout<<" ";
            i++;
        }
    }
}