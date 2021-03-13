#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*top = NULL;

void display(){
    struct Node *d;
    d = top;
    while(d!=NULL){
        cout<<d->data<<'\n';
        d = d->next;
    }
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
    if(top == NULL){
        cout<<"Stack Empty";
    }
    else{
        struct Node *p;
        p = top;
        x = p->data;
        top = top->next;
        free(p);
    }
}

void sortStack(){
    int tmp;
    struct Node *helper;
    struct Node *s;
    helper = new Node;
    s = top;
    while(s!=NULL){
        if(tmp<s->data){
            helper->data = s->data;
            cout<<helper->data<<" "; 
        }
    }
}

int main(){
    push(10);
    push(5);
    push(4);
    push(5);
    push(20);
   // display();
   sortStack();
}
