#include<iostream>
#include<map>
using namespace std;

void FindDuplicate(string str, int n){
    map<char, int> m;
    for(int i = 0; str[i]; i++){
        if(m.find(str[i]) == m.end() ){
            m[str[i]] = 1;
        }
        else{
            m[str[i]] +=1;
        }
    }
    for(auto& it : m){
        if(it.second>1){
            cout<<"Duplicate Letters: "<<it.first<<" Frequency: "<<it.second<<endl;
        }
    }
    
}

int main(){
    string str = "Neel";
    int size = str.length();
    FindDuplicate(str, size);
}