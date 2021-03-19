#include<iostream>
using namespace std;

int DPFindMax(int a[], int n){
    int max_so_far = a[0];
    int curr_max = a[0];

    for(int i=1; i<n; i++){
        curr_max = max(a[i], curr_max+a[i]);
        max_so_far = max(curr_max, max_so_far);
    }
    return max_so_far;
}

int FindMax(int a[], int n){
    int MaxSoFar = 0;
    int MaxEndingHere = 0;
    for(int i = 0; i<n; i++){
        MaxEndingHere+=a[i];
        if(MaxSoFar<MaxEndingHere){
            MaxSoFar = MaxEndingHere;
        }
        if(MaxEndingHere<0){
            MaxEndingHere = 0;
        }


    }
    return MaxSoFar;
}

int main(){
    int a[] = {-1,2,3,4,5,6,7,8};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<FindMax(a,n)<<'\n';
    cout<<DPFindMax(a,n)<<'\n';
}