#include<iostream>
using namespace std;


int sorter(int a[], int size){
    int flag;
    for(int i = 0; i<size; i++){
        flag =  1;
        for(int j = 0; j<size-1-i; j++){
            if(a[j]>a[j+1]){
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
         if(flag = 0){
            break;
        }
    }
   
    
}
int MinMax(int a[], int size){
    sorter(a, size);
    cout<<"Min: "<<a[0]<<endl;
    cout<<"Max: "<<a[size-1]<<endl;
}

int main(){
    int a[] = {3,2,1,1,5,6,5,5,4,1,2,0,100000};
    int size = sizeof(a)/sizeof(a[0]);
    MinMax(a,size);
}