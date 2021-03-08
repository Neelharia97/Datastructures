#include<iostream>
using namespace std;

void func2(int x){
    if(x>0){
        cout<<x<<" ";
        func2(x-1);
    }
    cout<<'\n';
}

void func1(int x){
    if(x>0){
        func1(x-1);
        cout<<x<<" ";
    }
    
}

int main(){
    int x =4;
    func1(x);
    cout<<'\n';
    func2(x);
}