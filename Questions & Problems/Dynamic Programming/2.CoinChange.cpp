#include<iostream>
using namespace std;


int CoinChange(int s[], int m, int n){
    if(n  == 0 ){
        return 0;
    }
    else if(s[n-1]<=n){
        return (s[n-1]+CoinChange(s,m-1, n-s[n-1]) + CoinChange(s,m,s[n-1]));
    }
    else if(s[n-1]>n){
        return CoinChange(s,m,s[n-1]);
    }

}

int main(){
    int n  = 4;
    int m = 3;
    int s[] = {1,2,3};
    cout<<CoinChange(s, m, n);
}