#include<iostream>
using namespace std;

void swap(int a, int b){
    int tmp = a;
    a = b;
    b = tmp;
}

int SortArray(int *a, int n){
    int start = 0; 
    int pivot = 1;
    int mid = n/2;
    while(start<=n){
        if(a[start]>pivot){
            a[n] = a[start];
            start++;
            n--;
        }
        else if(a[start] == pivot){
            a[n/2] = pivot;
            start++;
            n--;
        }

    }
    return *a;
    
}

int main(){
    int a[] = {0,0,0,1,1,2,0,1,1,1};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<SortArray(a,n);
}