#include<iostream>
using namespace std;

int fun(int x){
    if(x>0){
        return fun(x-1) + x;
    }
    return 0;
}

int fun1(int x){
    static int a = 0;
    if(x>0){
        a++;
        return fun(x-1)+a;    
    }
    return 0;
}

int main(){
    int r,s;
    r = fun(5);
    s = fun1(5);
    cout<<r<<' ';
    cout<<s<<' ';
    return 0;
}