#include<iostream>
using namespace std;

int sort(int *a, int n){  //O(n^2), can be reduced to (O(nlogn)) by using merge sort
    for(int i = 0; i<n; i++){
        for(int j = i+1;j<n-1;j++){
            if(a[i]>a[j]){
                int tmp = a[j];
                a[j] = a[i];
                a[i] = tmp;
            }
        }
    }
    return *a;
    
    
}

int KMax(int *a, int n, int k){
    sort(a,n);
    return a[n-k];
}

int KMin(int *a, int n, int k){
    sort(a,n);
    return a[k-1];

}

int main(){
    int a[] = {7, 10, 4, 3, 20, 15}; //3 4 7 10 15
    int n = sizeof(a)/sizeof(a[0]);
    int k;
    cin>>k;
   // KMax(a,n,k);
    cout<<"Max: "<<KMax(a,n,k)<<'\n';
    cout<<"Min: "<<KMin(a,n,k)<<'\n';
}