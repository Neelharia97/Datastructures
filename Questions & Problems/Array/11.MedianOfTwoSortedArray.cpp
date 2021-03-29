#include<iostream>
using namespace std;

void display(int d[], int t){
    for(int i = 0; i<t; i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;
    if(t%2 == 0){
        cout<<"Median: "<<(d[(t/2)-1]+d[(t/2)])/2<<endl;
    }
    else{
        cout<<"Median: "<<d[(t/2)]<<endl;
    }
}


void merge(int a[], int b[], int m, int n){
    int i, j, k;
    i = j = k = 0;
    int c[40];
    while(i<m && j<n){
        if(a[i]<b[j]){
            c[k++] = a[i++];
        }
        else{
            c[k++] = b[j++];
        }
    }
    for(; i<m; i++){
        c[k++] = a[i];
    }
    for(; j<n; j++){
        c[k++] = b[j];
    }
    display(c,m+n);
}



int main(){
    int arr1[] = {2, 3, 5, 8};
    int arr2[] = {10, 12, 14, 16, 18, 20};
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);
    merge(arr1,arr2,m,n);
}