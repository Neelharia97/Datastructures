#include<iostream>
using namespace std;

int optimizedMethod(int a[],int size, int x, int k ){
    int i = 0;
    while(i<size){
        if(a[i] == x){
         return i;//   cout<<"the index is: "<<i<<endl;
        }
        i = i+max(1,(a[i]-x)/k);
    }
    cout<<"Not present";
}
int NaiveMethod(int a[], int size, int x, int k){
    for(int i = 0; i<size; i++){
        if(a[i] == x){
            cout<<"the index is: "<<i<<endl;
        }
    }
}

int main(){
    int arr[] = {4,5,6,7,8};
    int k;
    cin>>k;
    int x;
    cin>>x;
    int size = sizeof(arr)/sizeof(arr[0]);
    NaiveMethod(arr, size, x, k);
    optimizedMethod(arr, size, x, k);
}