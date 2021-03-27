#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
}*top;

void display(){
    struct Node *d;
    d = top;
    while(d){
        cout<<d->data<<" ";
        d = d->next;

    }
    cout<<endl;
}

int isEmpty(){
    if(top == NULL){
        return 0;
    }
    else{
        return 1;
    }
}

void push(int x){
    struct Node *p;
    p = new Node;
    if(p == NULL){
        cout<<"Stack Full"<<endl;
    }
    else{
        p->data = x;
        p->next = top;
        top = p;
    }
}
int pop(){
    int x = -1;
    struct Node *t;
    if(top == NULL){
        cout<<"Stack Empty"<<endl;
    }
    else{
        t = top;
        x = t->data;
        top = top->next;
        free(t);
    }
    return x;
}
void insertSorted(int x){
    if(isEmpty() || x>top->data){
        push(x);
    }
    else{
        int a = pop();
        insertSorted(x);
        push(a);
    }
}

void sortStack(){
    if(!isEmpty()){
        int b = pop();
        sortStack();
        insertSorted(b);
    }
}

int main(){
    push(10);
    push(5);
    push(40);
    push(15);
    push(18);
    push(1);
    display();

    sortStack();
    display();

}