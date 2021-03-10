#include<iostream>
using namespace std;

int Recursive_sum(int n){
    if(n == 0){
        return 0;
    }
    else{
        return Recursive_sum(n-1)+n;
    }
}

int iterative_sum(int n){
    int  i, s = 0;
    for(i = 1; i<=n; i++){
        s = s+i;
    }
    return s;
}

int formula(int n){
    return n*(n+1)/2;
}

int main(){
    cout<<"Recursive:"<<Recursive_sum(5)<<'\n';
    cout<<"Iterative:"<<iterative_sum(10)<<'\n';
    cout<<"Formula:"<<formula(10)<<'\n';
}