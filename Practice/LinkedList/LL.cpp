#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
}*first = NULL;

void display(struct Node *p){
    while(p){
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<'\n';
}

void create(int a[], int n){
    struct Node* t, *last;
    first = new Node;
    first->data = a[0];
    first->next = NULL;
    last = first;

    for(int i = 1; i<n; i++){
        t = new Node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

int main(){
    int a[] ={1,2,3,4,5,6};
    int size = sizeof(a)/sizeof(a[0]);
    create(a, size);
    display(first);

}