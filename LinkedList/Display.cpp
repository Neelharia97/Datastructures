#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node *next;
}*first=NULL;

void display(struct Node *p){
	while(p!=NULL){
		cout<<p->data<<" ";
		p = p->next;
	}
}
void create(int A[], int n){
	int i;
	struct Node *t,*last;
	first = new Node;
	first ->data = A[0];
	first ->next = NULL;
	last = first;

	for(int i = 1; i<n ; i++){
		t = new Node;
		t->data = A[i];
		t->next = NULL;
		last->next = t;
		last =t;	
	}
}


int main(){
	int A[] = {3,5,7,10,15};
	create(A,5);
	display(first);
}