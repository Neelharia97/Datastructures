#include<iostream>
#include<vector>
using namespace std;
void display(int a[],int n){
 //   int size_c = sizeof(c)/sizeof(c[0]);
    for(int i = 0;i<n;i++){
        cout<<a[i]<<' ';    }
}

int sort(int a[], int n){
    for(int i =0;i<n; i++){
        for(int j = i+1; j<n-1; j++){
            if(a[i]>=a[j]){
                int tmp = a[i];
                a[i] = a[j];
                a[j] = a[i];
            }
        }
    }
    display(a,n);
}

int find_union(int a[], int b[], int size_a, int size_b){
   
}

int main(){
    int a[] = {85,2,3,4,5,4};
    int size_a = sizeof(a)/sizeof(a[0]);
    sort(a, size_a);
}