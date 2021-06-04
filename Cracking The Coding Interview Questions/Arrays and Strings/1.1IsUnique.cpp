#include<iostream>
#include<string>
using namespace std;

bool checker(string s, int size){
    if(size>128){
        return false;
    }
    else{
        bool charset[128] = {};
        for(int i = 0; i<size; i++){
            int val = s[i]-'A';
            cout<<val<<endl;
            if(charset[val]){
                return false;
            }
            else{
            charset[val] = true;
            }
        }   
        return true;
    }
}

int main(){
    string str = "ABCDEFAGHIJKLMNO";
    int size = sizeof(str)/sizeof(str[0]);
    bool result = checker(str,size);
    if(result == true){
        cout<<"True, all unique";
    }
    else{
        cout<<"False, Not Unique";
    }
}