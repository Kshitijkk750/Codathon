/*
13.Write a program by using switch case if user enter 11 it will have are area of
circle and when user enter 22 it will have area of rectangle and when user enter
33 it will give area of square when user enter 44 it will give area of triangle.
*/

#include<iostream>
using namespace std;
int main(){
    int l,b,ar,as,x,y,s,n,r;
    double at,ac;
    cout<<"11.area of circle.\n22.area of rectangle.\n33.area of square.\n44.area of triangle.\n";
    cout<<"\nEnter the choice :";
    cin>>n;
    switch(n){
        case 11:
            cout<<"enter the radius:\t";
            cin>>r;
            ac=3.14*r*r;
            cout<<"Area of circle is : "<<ac<<"\n";
            break;
        case 22:
            cout<<"enter the length and breadth of rectangle :\t";
            cin>>l>>b;
            ar=l*b;
            cout<<"Area of Rectangle is:\t"<<ar<<"\n";
            break;
        case 33:
            cout<<"Enter the side of square:\t";
            cin>>s;
            as=s*s;
            cout<<"Area of Square ius :"<<as<<"\n";
            break;
        case 44:
            cout<<"Enter te  height and base of triangle:\t";
            cin>>x>>y;
            at=0.5*x*y;
            cout<<"Area of Triangle is :"<<at<<"\n";
            break;
        default :
            cout<<"Invalid choice ...\n";
            


    }
}