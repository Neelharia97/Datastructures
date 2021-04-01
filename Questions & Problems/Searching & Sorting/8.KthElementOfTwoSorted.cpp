#include<iostream>
using namespace std;

void display(int* c, int z, int q){
    for(int i = 0; i<z; i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;
    cout<<"Element at "<<q<<" is: "<<c[q-1]<<endl<<endl;
}

int merge(int* a, int *b,int* c, int n, int m, int q){
    int i = 0, j = 0, k= 0;
    //int c[m+n];
    while(i<n && j<m){
        if(a[i]<b[j]){
            c[k++] = a[i++];
        }
        else{
            c[k++] = b[j++];
        }
    }
   for(; i<n; i++){
       c[k++] = a[i];
   }
    for(; j<m; j++){
       c[k++] = b[j];
   }

    display(c, n+m, q);
}


int main(){
    int a[] = {2, 3, 6, 7, 9};
    int b[] = {1, 4, 8, 10}; //1 2 3 4 6 7 8 9 10 
    
    int size1 = sizeof(a)/sizeof(a[0]);
    int size2 = sizeof(b)/sizeof(b[0]);
    int f[size1+size2];
    merge(a, b,f, size1, size2, 5);
    mergeSort(f);


    // int s[10];
    // int r[10];
    // cout<<"S: ";
    // for(int i = 0; i<10; i++){
    //     s[i] = rand()%10;
    //     cout<<s[i]<<" ";
    // }
    // cout<<endl;
    // cout<<"R: ";
    // for(int i = 0; i<10; i++){
    //     r[i] = rand()%10;
    //     cout<<r[i]<<" ";
    // }
    // cout<<endl;
    // int sizeS = sizeof(s)/sizeof(s[0]);
    // int sizeR = sizeof(r)/sizeof(r[0]);
    // int c[sizeS+sizeR];
    // cout<<sizeR<<endl;
    // merge(s,r,c,sizeS,sizeR,10);
}