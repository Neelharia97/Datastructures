#include<iostream>
#include<map>   
using namespace std;


void mergeIntervals(int a[][2], int size1){
        map<int, int> m;
        int b[size1][2];
        int k = 0, q = 0;
        for(int i = 0; i<size1; i++){
            for(int j = i+1; j<size1-1;j++)
                if(a[i][1]>=a[j+1][0]){
                    b[k][0] = a[i][0];
                    b[k][1] = a[j+1][1]; 
                    k++;  
                }
        }
       cout<<b[0][0]<<' '<<b[0][1];
}

int main(){
    int i, j;
    int size1;
    cin>>size1;
    int a[size1][2];
    for(int i = 0; i<size1; i++){
        for(int j = 0; j<2; j++){
            cin>>a[i][j];
        }
    }
    mergeIntervals(a, size1);
}