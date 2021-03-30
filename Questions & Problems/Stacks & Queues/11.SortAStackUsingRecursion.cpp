#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
}*top;


bool isEmpty(){
    if(top = NULL){
        return true;
    }
    return false;
}

bool isFull(){
    struct Node *t;
    t = new Node;
    if(t == NULL){
        return true;
    }
    return false;
}

void display(){
    struct Node *p;
    p =top;
    while(p){
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}




void push(int x){
    struct Node* t;
    t = new Node;
    if(t == NULL){
        cout<<"Stack Full"<<endl;
    }
    else{
        if(isEmpty()){
            t->data = x;
        }
        else{
            if(top->data)
        }
        
        t->next = top;
        top = t;
    }

}

int pop(){
    struct Node* p;
    int x = -1;
    if(top == NULL){
        cout<<"Stack Empty"<<endl;
    }
    else{
        p = new Node;
        x = p->data;
        top = p->next;
        free(p);
    }
    return x;
    
}

int main(){
    push(6);
    push(6);
    push(6);
    push(6);
    push(6);
    push(6);
    push(6);
    push(6);
    push(6);
    push(6);
    //display();
    sorter();
}