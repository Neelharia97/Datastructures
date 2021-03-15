#include<iostream>
using namespace std;
void display(int b[], int n){
    for(int i =0; i<n; i++){
        cout<<b[i]<<' ';
    }
}
void rearrange(int a[], int n){
    int b[n];
    int j = n-1;
    int q = 0;
    for(int i = 0;i<n; i++){
        if(a[i]<=0){
            b[q] = a[i];
            q++;
        }
        else{
            b[j] = a[i];
            j--;
        }
        
    }
    display(b,n);
}

int main(){
    int a[] = {-1, 2, -3, 4, 5, 6, -7, 8, -9};
    int n = sizeof(a)/sizeof(a[0]);
    rearrange(a,n);
}