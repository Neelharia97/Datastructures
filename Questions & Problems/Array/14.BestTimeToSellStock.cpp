#include<iostream>
using namespace std;

int bestTime(int arr[], int size){
    int i = 0; 
    int n = size-1;
    int best = 0;
    while(n>i){
        if(arr[i]<arr[n] && arr[n]-arr[i]>best){
            best = arr[n]-arr[i];
        }
        i++;
        n--;
    }
   // cout<<" "<<BuyDate<<" "<<SellDate;
    return best;
}


int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<bestTime(arr, size);
}