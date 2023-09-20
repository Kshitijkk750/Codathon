//18.Write a program to sort even and odd elements of an array separately.
#include<iostream>
using namespace std;

int main(){
    int arr[5]={10,34,33,45,76};
    int i,j;
    for( i=0;i<5;i++){
        if(arr[i]%2==0){
            cout<<" \t";
            cout<<arr[i];
        }
        else{
            cout<<" ";
        }
        
    }
            cout<<"\t are even numbers"<<"\n";
    for(j=0;j<5;j++){
        if(i%2!=0){
            cout<<"\t";
            cout<<arr[j];
        }
        else {
            cout<<" ";
        }
    }
    cout<<"\t are odd numbers.";
}