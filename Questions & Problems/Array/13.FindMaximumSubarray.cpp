#include<iostream>
using namespace std;

void display(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sort(int arr[], int size){
    int flag;
    for(int i = 0; i<size; i++){
        flag = 0;
        for(int j = 0; j<size-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                flag = 1;
            }
    }
}
}


 int findMaxSubArray(int arr[], int size){
     int prod = 1;
     for(int i = 0; i<size; i++){
         if(arr[i]<=0){
             break;
         }
         else{
             prod *=arr[i];
         }
     }
     return prod;
}

int main(){
    int arr[]  = {1,3,2,4,1,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr, size);
    display(arr,size);
    cout<<findMaxSubArray(arr, size)<<endl;
}