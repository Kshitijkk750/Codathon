//10.Write a program to read an integer and print its multiplication table.

#include<iostream>

using namespace std;

int main(){
    int n,t;
    cout<<"Enter the number:\n";
    cin>>n;
    cout<<"Multiplication table of "<<n<<" is :\n";
    for(int i=1;i<=10;i++){
        t=n*i;
        cout<<n<<"x"<<i<<"="<<t<<"\n";
    }
}