#include<iostream>
using namespace std;

int reverse(int *a, int n){
    int start = 0;
    int end = n-1;
    
    while(start<end){
        int tmp = a[start];
        a[start] = a[end];
        a[end] = tmp;
        start++;
        end--;
    }
    
    for(int i =0; i<n; i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int n;
    int a[] = {1,7,3,4,5,8,2,8,9};
    n = sizeof(a)/sizeof(a[0]);
    //for(int i = 0; i<n; i++){
     //   a[i] = i+1;
    //}
    reverse(a,n);

}