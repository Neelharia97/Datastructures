#ifndef Queue_LL_h
#define Queue_LL_h

#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
}*front = NULL, *rear = NULL;

void enqueue(int x){
    struct Node *t;
    t = new Node;
    if(t == NULL){
        cout<<"Full Queue";
    }
    else{
        t->data = x;
        if(front == NULL){
            front = rear = t;
        }
        else{
            rear->next = t;
            rear = t;
        }
    }
}

int dequeue(){
    int x = -1;
    struct Node *t;
    if (front == NULL){
        cout<<"Queue is Empty";
    }
    else{
        t = front;
        x = front->data;
        front = front->next;
        free(t);
    }
    return x;
}

void display(){
    struct Node *p;
    p = front;
    while(p){
        cout<<p->data; 
        cout<<'\n';
        p = p->next;
    }
}

int main(){
    

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);

    cout<<"Enqueue"<<'\n';
    display();
    
    dequeue();
    dequeue();
    dequeue();
    cout<<"Dequeue"<<'\n';
    display();
}