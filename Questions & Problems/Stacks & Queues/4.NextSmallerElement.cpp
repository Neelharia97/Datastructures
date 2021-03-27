#include<iostream>
#include<stack>
using namespace std;

void printNSE(int arr[], int n){
    stack<int> s;
    s.push(arr[0]);
    for(int i  = 1; i<n; i++){
        if(s.empty()){
            s.push(arr[i]);
            continue;
        }
        while(s.empty()==false && s.top()>arr[i]){
            cout<<s.top()<<"--->"<<arr[i]<<endl;
            s.pop();
        }
        s.push(arr[i]);
    }
    while(s.empty() == false){
        cout<<s.top()<<"--->"<<-1<<endl;
        s.pop();
    }
}

int main(){
    int a[] = {5,4,5, 4,5,2,1,0};
    int n = sizeof(a)/sizeof(a[0]);
    printNSE(a,n);
}