#include<iostream>
#include<string>
using namespace std;


void printSubstring(string ip, string op){
    if(ip.length() == 0){
        cout<<flush<<(op)<<" ";
    }
    else{
        string op1 = op;
        string op2 = op;
        op2.push_back(ip[0]);
        ip.erase(ip.begin()+0);
        printSubstring(ip,op1);
        printSubstring(ip,op2);
    }
}

int main(){
    string ip = "Hello World";
    string op = "";
    printSubstring(ip, op);
}