#include<iostream>
using namespace std;

int MinNumber(int a[], int n){
    int count = 0;
    for(int i =0; i<=n;i+=a[i]){
        count+=1;
    }
    return count;
}

int main(){
    int a1[] = {1, 4, 3, 2, 6, 7};
    int n1 = sizeof(a1)/sizeof(a1[0]);
    int a2[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int n2 = sizeof(a2)/sizeof(a2[0]);
    int a3[] = {1,4,3,5,6};
    int n3 = sizeof(a3)/sizeof(a3[0]);
    // int a4[] = {};
    // int n4 = sizeof(a4)/sizeof(a4[0]);

    cout<<MinNumber(a1,n1)<<'\n';
    cout<<MinNumber(a2,n2)<<'\n';
cout<<MinNumber(a3,n3)<<'\n';

}