#include<iostream>
using namespace std;

int main(){
    int *A, size, length;
    int i,n;
    cout<<"enter size: ";
    
    cin>>size;
    cout<<"enter number of numbers: ";
    cin>>n;
    
    A = new int[size];
    for(i = 0; i<n; i++){
        cin>>A[i];
    }
    cout<<"The numbers are: ";
    for(i = 0; i<n ;i++){
        cout<<A[i]<<'\n';
    }
    
    delete []A;
    
}