#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<endl;
    int L,N;
    
    for(int i = 0; i<n; i++){
        cout<<"L: ";
        cin>>L;
        cout<<"N: ";
        cin>>N;
        int a[L];    
        for(int j = 0; j<L; j++){
            cin>>a[j];
        }
    }
}