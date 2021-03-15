#include<iostream>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
}*first = NULL;


void display(struct Node *p){
	while(p)
		cout<<p->data<<" ";
		p = p->next;
	cout<<'\n';
}

void inserSorted(struct Node *p, int key){
	struct Node *t, *q = NULL;
	t = new Node;
	t->data = key;
	t->next = NULL;

	if(first == NULL){
		first = t;
	
	}
	else{
		while(p && p->data<key){
			q = p;
			p = p->next;
		}
		if(p == first){
			t->next = first;
			first = t;
		}
		else{
			t->next = q->next;
			q->next = t;
		}
	}
}

void create(int a[], int n){
	int i;
	Node *t, *last;
	first = new Node;
	first->data = a[0];
	first->next =NULL;
	last = first;
	for(i =1; i<n; i++){
		t = new Node;
		t->data = a[i];
		t->next = NULL;
		last->next = t;
		last = t;
}
}

int main(){
	int a[] = {10,20,30,40,50};
	create(a,5);
	display(first);
	inserSorted(first,25);
	display(first);
}