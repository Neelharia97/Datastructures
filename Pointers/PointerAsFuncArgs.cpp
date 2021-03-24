#include<iostream>
using namespace std;
int callByValue(int a){ //creates another copy of variable a
    cout<<"Address inside func: "<<&a<<endl;
    a+=1;
}

int callByReference(int *p){ //Uses the same a as in the main
    cout<<"Address inside func: "<<p<<endl;
    *p +=1;
}

int main(){
    int a = 10;
    cout<<"---------------------------------"<<endl;
    cout<<"Call By Value"<<endl;
    callByValue(a);
    cout<<"Address of a in main: "<<&a<<endl;
    cout<<"After call by value: "<<a<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"Call By Reference"<<endl;
    callByReference(&a);
    cout<<"Address of a in main: "<<&a<<endl;
    cout<<"After call by reference: "<<a<<endl;
    cout<<"---------------------------------"<<endl;
}