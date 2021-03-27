#include<iostream>
using namespace std;


struct Node{
    char data;
    struct Node *next;
}*top; 

void display(){
    struct Node *d; 
    d = top;
    while(d){
        cout<<d->data<<' ';
        d = d->next;
    }
    cout<<endl;
}
void push(char x){
    struct Node *t;
    t = new Node;
    if(t == NULL){
        cout<<"stack full"<<" ";
    }
    else{
        t->data = x;
        t->next = top;
        top = t;
    }
}

int push(){
    char x = '-1';
    struct Node *p;
    if(top == NULL){
        cout<<"Stack Empty"<<endl;
    }
    else{
        p = top;
        x = p->data;
        top = top->next;
        free(p);
    }
    return x;
}

int main(){
    string str = "NeelAsmita";
    for(int i = 0; i<str.length(); i++){
            push(str[i]);
    }
    display();
}