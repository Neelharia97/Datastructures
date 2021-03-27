#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
}*front = NULL, *rear = NULL;

void display(){
    Node *a;
    a = front;
    while(a!=NULL){
        cout<<a->data<<" ";
        a = a->next;
    }
    cout<<endl;
}

void enqueue(int x){
    struct Node *t;
    t = new Node;
    if(t==NULL){
        cout<<"Queue Full";
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
    struct Node *p;
    if(front == NULL){
        cout<<"Queue is Empty";
    }
    else{
        p = front;
        x = p->data;
        front = front->next;
        free(p);
    }
    return x;
}

int main(){
    enqueue(10);
//     enqueue(20);
//     enqueue(30);
//    enqueue(40);
    // enqueue(50);

    display();
}