#include<iostream>
using namespace std;

void MissingAndRepeating(int a[], int size){
    int frequency[7] ={0};
    for(int i = 0; i<size; i++){
        frequency[a[i]] +=1;
    }
    for(int i = 1; i<=size; i++){
        if(frequency[i-1] == 0){
            cout<<"Missing: "<<i-1<<endl;
        }
        else if(frequency[i-1]>1){
            cout<<"Repeating: "<<i-1<<endl;
        }
    }
}

int main(){
    int a[] = {1,1,2,3,5,6,7};
    int size = sizeof(a)/sizeof(a[0]);
    MissingAndRepeating(a,size);
}