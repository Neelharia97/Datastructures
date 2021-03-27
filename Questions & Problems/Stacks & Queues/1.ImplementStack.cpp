#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*top;

void display(){
    struct Node *p;
    p = top;
    while(p){
        cout<<p->data<<' ';
        p = p->next;
    }
    cout<<endl;
}

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
    struct Node *p;
    if(p == NULL){
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
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    display();
    pop();
    display();}
