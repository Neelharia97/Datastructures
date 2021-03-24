#include<iostream>
using namespace std;

int main(){
    int A[] = {2,4,5,8,1};
    int i;
    int *p = A;
    for(int i = 0; i<sizeof(A)/sizeof(A[0]); i++){
        cout<<"Address: "<<&A[i]<<endl;
        cout<<"Address: "<<A+i<<endl;
        cout<<"Value: "<<A[i]<<endl;
        cout<<"Value: "<<*(A+i)<<endl;
    }
}