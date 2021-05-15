#include<iostream>
#include<string>
using namespace std;

void reverse(string og,int size){
    if(size == 0){
       cout<<" ";
    }
    else{
        cout<<og[size-1];
        size--;
        reverse(og,size);
    }
}

int main(){
    string orignal;
    orignal = "What a cool guy neel is";
    int size;
    size = orignal.length();
    reverse(orignal,size);
}