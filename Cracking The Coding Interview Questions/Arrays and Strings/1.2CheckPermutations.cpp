#include<iostream>
#include<string>
using namespace std;

string sorter(string &s, int size){
    for(int i = 0; i<size; i++){
        for(int j = i; j<size-i-1; j++){
            if(s[i]>s[j]){
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }    
    }
    return s;
}

void checker(string str1, string str2, int size1, int size2){
    string s1 = sorter(str1, size1);
    string s2 = sorter(str2, size2);
    if(s1 == s2){
        cout<<"Permutations of Each other";
    }
    else{
        cout<<"Not Permutations of each other";
    }

}

int main(){
    string p = "abca";
    string q = "aasa";
    int size1 = sizeof(p)/sizeof(p[0]);
    int size2 = sizeof(q)/sizeof(q[0]);
    checker(p,q,size1,size2);
}