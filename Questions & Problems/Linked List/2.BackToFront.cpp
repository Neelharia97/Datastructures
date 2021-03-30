#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
}*top = NULL, *last = NULL;

void display(){
    struct Node *p;
    p = first;
    while(p){
        cout<<p->data<<' ';
        p = p->next;
    }
    cout<<'\n';
}

void create(int a[], int size){
    struct Node* first;
    first = new Node;
    struct Node* t;
    first->data  = a[0];
    first->next = NULL;
    last = first;
    for(int i =1; i<size; i++){
        t = new Node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last =t;
        
    }
}
