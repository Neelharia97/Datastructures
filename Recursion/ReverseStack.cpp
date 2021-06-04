#include<iostream>
#include<stack>
using namespace std;

stack<int> m;

void display(){
    while(!m.empty()){
        int a = m.top();
        cout<<a<<" ";
        m.pop();
        
    }
}


int insertBottom(int x){
    if(m.size() == 0){
        m.push(x);
    }
    else{
        int k = m.top();
        m.pop();
        insertBottom(x);
        m.push(k);
    }
}

int reverse(){
    if(m.size()>0){
        int x = m.top();
        m.pop();
        reverse();
        insertBottom(x);
    }
}

int main(){
    for(int i = 0; i<10000; i++){
        m.push(i);
    }
    
    display();
    reverse();
    // display();
    
    
}