#include<iostream>
using namespace std;

int main(){
    int x = 5;
    int* p = &x;
    *p = 6; //x is now 6
    int** q = &p;
    int*** r = &q;

    cout<<"value of *p: "<<*p<<endl; 
    cout<<"value of address of p: "<<p<<endl; 
    cout<<"value of *q: "<<*q<<endl;
    cout<<"value of **q: "<<**q<<endl;
    cout<<"value of **r: "<<**r<<endl;
    cout<<"value of ***r: "<<***r<<endl;
    ***r = 10;
    cout<<"New value of x: "<<x<<endl;

}