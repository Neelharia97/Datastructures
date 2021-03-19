#include<iostream>
using namespace std;


int findMax(int a[], int n){
    int max = a[0];
    for(int i = 1; i<n; i++){
        if(a[i]>max){max = a[i];}
    }
    return max;
}
int findMin(int a[], int n){
    int min = a[0];
    for(int i = 1; i<n; i++){
        if(a[i]<min){min = a[i];}
    }
    return min;
}

int newDiff(int a[], int n, int k){
    int max_diff = 0;
    int min_num = findMin(a,n);
    int max_num = findMax(a,n);
    for(int i =0; i<n;i++){
        if(a[i]>min_num){
            a[i] -= k; 
        }
        else if(a[i] == min_num){
            a[i] += k;
        }
    }
    return (findMax(a,n) - findMin(a,n));
}

// int trigger(int a[], int n, int k){
//     int curr_max = 0;
//     int curr_min = 0;
//     int max_num = findMax(a, n);
//     int min_num = 
//     curr_max = max(max_num, max_num-k);
//     curr_min = max()
// }


int main(){
    int a[] =  {1, 2, 3};
    int n = sizeof(a)/sizeof(a[0]);
    int k = 2;
    cout<<newDiff(a,n,k);
  
}