#include<iostream>
#include<queue>
#include<string>
using namespace std;

const int MAX_CHAR = 26;
int minStringValue(string str, int k){
    int l = str.length();
    if(k>=l){
        return 0;
    }
    int frequency[MAX_CHAR] = {0};
    for(int i = 0; i<l ; i++){
        frequency[str[i] - 'a']++;
    }

    priority_queue<int> q;
    for(int i = 0; i<MAX_CHAR; i++){
        q.push(frequency[i]);
    }

    while(k--){
        int temp = q.top();
        q.pop();
        temp = temp - 1;
        q.push(temp);
    }

    int result = 0;
    while(!q.empty()){
        
        int temp = q.top();
        result += temp*temp;
        q.pop();
    }
    return result;
}
int main(){
    string str = "aabbcc";
    int k  = 2;
    cout<<minStringValue(str,k)<<endl;
    str = "abbccc";
    cout<<minStringValue(str,k)<<endl;
    str = "aaabbcc";
    cout<<minStringValue(str,k)<<endl;
}