#include<iostream>
using namespace std;

int findSubarray(int a[], int size, int window){
    int i =0, j = 0;
    int sum = 0;
    int max_res = 0;
    while(j<size){
        sum = sum + a[j];
        if(j-i+1<window){
            j++;
        }
        else if(j-i+1 == window){
            max_res = max(sum,max_res);
            sum = sum-a[i];
            i++;
            j++;
        }
        
  
    }
    return max_res;
}

int main(){
    int a[] = {1,2,3,4,6};
    int size = sizeof(a)/sizeof(a[0]);
    cout<<findSubarray(a, size, 3);
}