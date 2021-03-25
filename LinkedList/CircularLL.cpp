#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*head;

void display(struct Node *p){
    do{
        cout<<p->data<<'\n';
        p = p->next;
    }while(p!=head);
    cout<<'\n';
}

void create(int A[], int n){
    int i; 
    struct Node *t, *last;
    head = new Node;
    head->data = A[0];
    head->next = head;
    last = head;

    for(int i = 1; i<n; i++){
        t = new Node;
        t->data = A[i];
        t->next = last->next; 
        last->next = t;
        last = t;
    }
}

int main(){
    int A[] = {1,2,4,5,6};
    create(A,5);
    display(head);
}