#include<iostream>
using namespace std;

// Array is always passed as referenced and never as value, because it
// can be very large. While iterating over the array, the size of A will 
// always be equal to the size of the first element in the array, since the 
// array pointer passed is pointing at first element initially. Therefore, 
// it is preferred calculating size in the main function itself.


int arrayDouble(int* A, int size){
    for(int i = 0; i<size; i++){
        A[i]*=2; 
    }
}

int incorrectSum(int* A){
    int sum = 0;
    int size = sizeof(A)/sizeof(A[0]);
    for(int i = 0; i<size; i++){
        sum+=A[i];
    }
    return sum;
}

int correctSum(int A[], int size){
    int sum = 0;
    for(int i = 0; i<size; i++){
        sum+=A[i];
    }
    return sum;
}

int main(){
    int A[] = {1,2,3,4,5};
    int size = sizeof(A)/sizeof(A[0]); //size of of total array in bytes % by size of first element in bytes
    int total1 = correctSum(A,size);
    int total2 = incorrectSum(A);
    cout<<"----------------------"<<endl;
    cout<<"Correct Sum: "<<total1<<endl;
    cout<<"Correct Sum: "<<total2<<endl;
    cout<<"----------------------"<<endl;
    cout<<"----------------------"<<endl;
    cout<<"   Array Before Modification    "<<endl;
    for(int i = 0; i<size; i++){
        cout<< A[i]<<" ";
    }
    cout<<endl;
    cout<<"   Array Modification    "<<endl;
    cout<<"----------------------"<<endl;  
    arrayDouble(A,size);    
    for(int i = 0; i<size; i++){
        cout<< A[i]<<" ";
    }
    cout<<endl;
    cout<<"----------------------"<<endl;


}