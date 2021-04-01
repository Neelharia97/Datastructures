#include<iostream>
#include<map>
using namespace std;


void counter(int* a, int size){
    map<int, int> m;
    for(int i = 0; i<size; i++){
        if(m.find(a[i])== m.end()){
            m[a[i]] = 1;
        }
        else{
            m[a[i]]+=1;
        }
    }

    for(auto& it : m){
      //  if(it.second>size/2){
            cout<<"Majority: "<<it.first<<" "<<it.second<<endl;
    //    }
    }
}

int main(){
    // int n =10;
    //cin>>n;
    int a[100];
    for(int i = 0; i<100; i++){
        a[i] = rand()%5;
    }
    for(int i = 0; i<100; i++){
            //a[i] = rand()%n;
        cout<<a[i]<<" ";
    }
    // int a[] = {3,3,3,3,3,3,1,1,1,2};
    // cout<<endl;
    int size = sizeof(a)/sizeof(a[0]);
    counter(a, size);
}