#include<iostream>
#include<stdio.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*top=NULL;

void push(int x){
    struct Node *t;
    t = new Node;
    if(t == NULL){
        cout<<"Stack Full";   
    }
    else{
        t->data = x;
        t->next = top;
        top = t;
    }

}

int pop(){
    int x = -1;
    struct Node *t;
    if(top == NULL){
        cout<<"Stack Empty";
    }
    else{
        t = top;
        top = top->next;
        x = t->data;
        free(t);
    }
    return x;
}

void display(){
    struct Node *p;
    p = top;
    while(p!= NULL){
        cout<<p->data<<'\n';
        p = p->next;
    }
}

int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    display();
    cout<<"Pop  "<<pop()<<'\n';
    display();
    
}