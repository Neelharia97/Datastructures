#include<iostream>
using namespace std;


struct Node{
    int data;
    struct Node* next;
}*top = NULL;

void push(int x){
    struct Node* p;
    p = new Node;
    if(p == NULL){
        cout<<"Stack is Full";
    }
    else{
        p->data = x;
        p->next = top;
        top = p;
    }
}

int pop(){
    int x = -1;
    struct Node* t;
    if(top == NULL){
        cout<<"Stack is Empty";
    }
    else{
        t = top;
        top = top->next;
        x = t->data;
        free(t);
    }
    return x;
}

void reverseStack(){
    struct Node* a;
    if(a == NULL){
        cout<<" ";
    }
    else{
       a = top;
       a = a->next;
       top = top->next;
       reverseStack();
    }
}

int main(){
    push(10);
    push(12);
    push(13);
    push(14);

    reverseStack();
}