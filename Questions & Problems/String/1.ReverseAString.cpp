#include<iostream>
#include<string>
#include<vector>
using namespace std;

void display(char* a, int n){
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<'\n';
}

void reverse(string str, int n){
    char  a[n];
    for(int i = 0; i<n; i++){
        a[i] = str[n-1-i];
    }
    display(a, n);
}

int main(){
    string str = "abcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefg";
    int n = str.length();
    reverse(str, n);
}