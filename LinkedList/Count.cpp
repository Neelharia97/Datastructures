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
	cout<<'\n';
}
void displayRecursive(struct Node *p){
	if(p!=NULL){
		cout<<p->data<<" ";
		displayRecursive(p->next);
		
	}
}
int number(struct Node *p){
    int length = 0;
    while(p!=NULL){
        length+=1;
        p = p->next;
    }
    return length;
}
int sum1(struct Node *p){
    int sum = 0;
    while(p!=NULL){
        sum+=p->data;
        p = p->next;
    }
    return sum;
}
int Rsum(struct Node *p){
	if(p == 0)
		return 0;
	else
		return Rsum(p->next)+p->data;
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
	displayRecursive(first);
    cout<<number(first)<<'\n';
	cout<<sum1(first)<<'\n'  ;
	cout<<Rsum(first)<<'\n';
}