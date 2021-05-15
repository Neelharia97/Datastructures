#include<iostream>
using namespace std;

void funB(int a);  

void funA(int a){
    if(a>0){
        cout<<a<<" ";
        funB(a-1);
    }
    cout<<"\n";
}

void funB(int a){
    if(a>0){
        cout<<a<<" ";
        funA(a/2);
    }
    cout<<'\n';
}

int main(){
    funA(20);
}