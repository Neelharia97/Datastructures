#include<iostream>
using namespace std;

void display(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sort(int arr[], int size){
    int pivot = 1;  
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    
    for(int i = 0; i<size; i++){
        if(arr[i]<pivot){
            count0+=1;
        }
        else if(arr[i] == pivot){
            count1+=1;
        }
        else{
            count2+=1;
        }
    }
    cout<<count0<<" "<<count1<<" "<<count2<<endl;
    for(int i = 0; i<count0; i++){
        arr[i] = 0;
    }
    for(int j = count0; j<count1+count0; j++){
        arr[j] = 1;
    }
    for(int k = count1+count0; k<size; k++){
        arr[k] = 2;
    }
    display(arr,size);

}

int main(){
    int arr[] = {1,0,0,1,1,1,2,0,1,0,2,1,0,1,2,1,2 };
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr, size);
    
}