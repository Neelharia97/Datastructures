#include<iostream>
using namespace std;

struct Node{
    int data;
    
    struct Node *next;
}*top = NULL;

void display(){
    struct Node *p;
    p = top;
    while(p!=NULL){
        cout<<p->data<<'\n';
        p = p->next;
    }
}

int push(int x){
    int min;    
    struct Node *t;
    t = new Node;
    if(t == NULL){
        cout<<"Stack Full";
    }
    else if(top == NULL){
        min = x; 
         t->data = x;
            t->next = top;
            top = t;
    }
    else{
        if(x<min){
        min = x;
         t->data = x;
            t->next = top;
            top = t;

        }
        else{
            t->data = x;
            t->next = top;
            top = t;
        }

    }
    return min;
}

int pop(){
    int x = -1;
     struct Node *p;
    if(top == NULL){
        cout<<"Stack Empty";
    }
    else{
       
        p = top;
        top = top->next;
        x = p->data;
        free(p);
    }
    return x;
}

int main(){
    push(10);
    push(20);
    push(30);
    push(5);
    cout<<push(10);
    pop();
    //display();
}