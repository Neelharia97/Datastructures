#include<iostream>
using namespace std;

void sort(int *A, int size){
    int flag; 
    for(int i = 0; i<size; i++){
        flag = 1;
        for(int j = 0; j<size-1-i; j++){
            if(A[j]>A[j+1]){
                int temp  = A[j+1];
                A[j+1] = A[j];
                A[j] = temp;            
            }
        
        }
    }

}

int countPairs(int *A, int size, int k){
    sort(A,size);
    int count = 0;
    int val;
   
    for(int i = 0; i<size; i++){ //O(N^2)
        for(int j = i+1; j<size; j++){
            if(A[i]+A[j] == k){
                count+=1;
            }
        }

    }
    return count;
}
   


int main(){
    int arr[] = { 1, 5, 7, -1, 5 };
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<countPairs(arr, size, 6);

}