// 
#include<string>
#include<iostream>
#include<map>
using namespace std;

void mapper(int l, int r){
    for(int i = l; i<r; i++){
        string a = to_string(i);
        map<string, int> m;
        for(int j = 0; j<a.length(); j++){
            if(m[a[j]]){
                m[a[j]] += 1;
            }
            else{
                m[a[j]] = 1;
            }
        }
    }
}