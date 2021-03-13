#include<iostream>
using namespace std;


int Max(int *a, int n){
    int max = a[0];
    for(int i = 0; i<n; i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;
}

int Min(int *a, int n){
    int min = a[0];
    for(int i = 0; i<n;i++){
        if(min>a[i]){
            min = a[i];
        }
    }
    return min;
}

int main(){ 
    int a[] ={1,2,3,4,5,5,8,8,8,8,8,8,4,54,8,4,84,84,20,6};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<"Max: "<<Max(a,n)<<'\n';
    cout<<"Min: "<<Min(a,n)<<'\n';
}