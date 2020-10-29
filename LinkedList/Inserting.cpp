#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node *next;
}*first = NULL;

void display(struct Node *p){
	while(p!= NULL){
		cout<<p->data<<" ";
		p = p->next;
	}
	cout<<'\n';
}
void insertAnywhere(struct Node *p, int key, int index){
	Node *t;
	t = new Node;
	t->data = key;
	if (index == 0){
		
		t->next = first;
		first = t;
	}
	else if(index>0){
		p = first;
		for(int i = 0; i<index-1 && p; i++){
			p = p->next;
		}
		t->next = p->next;
		p->next = t;
	}
}

void insertFirst(struct Node *p, int key){
	Node *t = new Node;
	t->data = key;
	t->next = first;
	first = t;
}
void insert(struct Node *p, int key,int index){ //from 1 to pos-1
	Node *t = new Node;
	t->data = key;
	p = first;
	for(int i = 0; i<index-1; i++){
		p = p->next;
	}
	t->next = p->next;
	p->next = t;
}

void create(int a[],int n){
	int i;
	struct Node *t,*last;
	first = new Node;
	first ->data = a[0];
	first ->next = NULL;
	last = first;
	for(i = 1; i<n ;i++){
		t = new Node;
		t->data = a[i];
		t->next = NULL;
		last -> next = t;
		last = t;
	}
}

int main(){
	int a[] = {1,2,3,4,5,6,7,8};
	create(a,8);
	//insert(first,15,1);
	//insert(first,15,4);
	//insert(first,15,8);
	//insertFirst(first,23);
	//insert(first,15,1);
	//insert(first,15,0);
	display(first);
	insertAnywhere(first,15,8);
	display(first);
}