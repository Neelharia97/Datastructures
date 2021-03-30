#include<iostream>
using namespace std;
//Remove duplicates from a sorted list
struct Node{
    int data;
    Node *next;
}*first = NULL, *last = NULL;

void display(){
    struct Node *p;
    p = first;
    while(p){
        cout<<p->data<<' ';
        p = p->next;
    }
    cout<<"\n";
}
void removeDuplicate(){
    
    struct Node* d;
    struct Node* next_next; 
    d = first;
    next_next;
    
    while(d->next!=NULL){
        if(d->data == d->next->data){
            next_next = d->next->next;
            free(d->next);
            d->next = next_next;
        }
        else{
            d = d->next;
        }
    }
}

void create(int a[], int n){
    int i;
    struct Node *t, *last;
    first = new Node;
    first->data = a[0];
    first->next = NULL;
    last = first;
    for(int i = 1; i<n; i++){
        t = new Node;
        t->data = a[i];
        t->next = NULL;
        last->next  = t;
        last = t;
    }
}

int main(){
    int arr[] = {50,50,50,50,50,50,50,50,5,5,0,5,1,2,2,3,3,4,4,5,5,5,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    create(arr,size);
   // display();
    removeDuplicate();
    display();
}