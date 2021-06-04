#include<iostream>
#include<string>
#include<map>
using namespace std;


map<char, int> mapper(string str, int size){
    map<char, int> m;
    for(int i = 0; i<size; i++){
        if(!m[str[i]]){
            m[str[i]] = 1;
        }
        else{
            m[str[i]] += 1;
        }
    }
    return m;

}

void OddChecker(string str, int size){
    int oddcount = 0;
    int SpaceCount = 0;
  
    map<char, int> m = mapper(str, size);
    
    for(auto &i : m){
        if(i.first == ' '){
            SpaceCount+= i.second;
        }
    }
    // cout<<SpaceCount<<" ";
    // cout<<oddcount<<" ";
    if(SpaceCount%2!=0 && SpaceCount>0){
        oddcount -= 1;
    }
    // cout<<oddcount<<" ";

    for(auto &i : m){   
        // cout<<oddcount<<" ?"<<endl;   
        // cout<<i.first<<" " <<i.second<<endl;
        if(i.second > 0 && i.second<2){
            oddcount+=1;
        } 
        else if((i.second)%2 != 0){
            oddcount+=1;
        }
    }
   
   
    
    if(oddcount <= 1){
        cout<<"A Permutation";
    }
    else{
        cout<<"Not A Permutation";
    }
}

void checker(string str, int size){
    OddChecker(str, size);
}


int main(){
    string check = "amann";
    int size = sizeof(check)/sizeof(check[0]);
    checker(check, size);  
}