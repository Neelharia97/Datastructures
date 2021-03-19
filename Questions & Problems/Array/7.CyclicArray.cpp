#include<iostream>
using namespace std;
void display(int a[], int n){
    for(int i =0; i<n; i++){
        cout<<a[i]<<' ';
    }
}
int rotate(int a[], int n){
    int x = a[n-1];
    for(int i = n-1; i>0; i--){
        a[i] = a[i-1]; 
        
    }
    a[0] = x;
    
    return *a;
}

int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int b;
    cin>>b;
    int n = sizeof(a)/sizeof(a[0]);
    rotate(a,n);
    for(int i = 0;i<n;i++){
        cout<<a[i]<<' ';
    }

}