#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node *next;

}*first = NULL;

void display(struct Node *p){
	while(p!=NULL){
		cout<< p->data<<" ";
		p = p->next;
	}
		
	cout<<'\n';
}
Node* search(struct Node *p, int key){
	while(p!=NULL){
		if(key == p->data)
			return p;
		p = p->next;
	}
	return NULL;
}



Node* Rsearch(struct Node *p, int key){
	if(p == NULL)
		return NULL;
	if(key == p->data)
		return p;
	return Rsearch(p->next, key);
}


Node *ImprovedSearch(struct Node *p, int key){
	struct Node *q= NULL;
	while(p!= NULL){
		if(key == p->data){
			q->next = p->next;
			p->next = first;
			first = p;
			return p;

		}
		q = p;
		p = p->next;
	
	}
return NULL;

}
void create(int A[], int n){
	int i;
	struct Node *t, *last;
	first = new Node;
	first->data = A[0]; 
	first->next = NULL;
	last = first;	

	for(int i = 1; i<n; i++){
		t = new Node;
		t->data = A[i];
		t->next = NULL;
		last ->next = t;
		last = t;
	}
}


int main(){
	int a[] = {1,2,4,5,6,8,9};
	create(a,7);
display(first);
	//cout<<search(first,1)<<'\n';
	//cout<<Rsearch(first,2)<<'\n';
	ImprovedSearch(first,4);
	ImprovedSearch(first,6);
	ImprovedSearch(first,8);
	
	display(first);
}