#include<iostream>
using namespace std;

int binarySearch(int arr[], int l, int r){
    int m  = (l+r)/2;
    if(arr[m] == m){
        return m;
    }
    else{
        while(l<=r){
            if(m>arr[m]){
                return binarySearch(arr, m+1,r);
            }
            else{
               return binarySearch(arr,l,m-1);
            }
        }
    }
    return -1;
}

int main(){
    int arr[] =  {-10, -1, 0, 3, 10, 11, 30, 50, 100};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<< binarySearch(arr,0,n-1);
}
