#include<iostream>
#include<math.h>
using namespace std;

int power(int m, int n){
    if(n == 0){
        return 1;
    }
    else{
        return pow(m,n-1)*m;
    }
}

int power2(int m, int n){
    if(n == 0){
        return 1;
    }
    if(n%2 == 0){
        return pow(m*m, n/2);
    }
    else{
        return m*pow(m*m, (n-1)/2);
    }
}

int main(){
    cout<<power(2,5)<<'\n';
    cout<<power2(2,8)<<'\n';
}