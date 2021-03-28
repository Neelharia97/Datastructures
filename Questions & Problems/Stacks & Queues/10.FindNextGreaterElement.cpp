#include<iostream>
#include<stack>
using namespace std;

int NSE(int a[], int n){
    stack<int> s;
    s.push(a[0]);
    for(int i = 1; i<n; i++){
        if(s.empty()){
            s.push(a[i]);
            continue;
        }
        while(s.empty() == false && s.top()<a[i]){
            int x = s.top();
            s.pop(); 
            cout<<x<<"-->"<<a[i]<<endl;
        }
        s.push(a[i]);

    }
    while(s.empty() == false){
        cout<<s.top()<<"-->"<<"-1"<<endl;
        s.pop();
    }


}

int main(){
    int arr[] = {11, 13, 21, 3 };
    int n = sizeof(arr)/sizeof(arr[0]);
    NSE(arr, n);
}