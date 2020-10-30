#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node *next;

}*first = NULL,*last = NULL;

void display(struct Node *p){
	while(p!= NULL){
		cout<<p->data<<" ";
		p = p->next;
	}
	cout<<'\n';
}
int count(struct Node *p){
	int i, c = 0;
	while(p!=NULL){
		c++;
		p = p->next;
	}
	return c;
}
/*

}
*/ 
void insertAnywhere(struct Node *p, int key, int index){
	Node *t;
	
	if (index == 0){
	t = new Node;
	t->data = key;	
		t->next = first;
		first = t;
	}
	else if(index>0){
		p = first;
		t = new Node;
	t->data = key;
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
void insertLast(struct Node *p,int key){
	Node *t = new Node;

	t->data = key;
	t->next = NULL;
	if(first == NULL){
		first = last = t;
	}
	else{
		last->next = t;
		last = t;

		}
}
int main(){
	// int a[] = {1,2,3};
	//create(a,3);
//	insert(first,15,0);
//	insert(first,15,1);
	insertLast(first,5);
	insertLast(first,6);
	insertLast(first,7);
	
	display(first);
	//cout<<count(first)<<'\n';
	//insertAnywhere(first,15,0);
	//insertAnywhere(first,15,1);
	//insertAnywhere(first,15,2);
	//insertAnywhere(first,15,3);
//	cout<<count(first)<<'\n';
	display(first);
//	cout<<count(first)<<'\n';
}