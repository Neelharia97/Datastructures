#include<iostream>
using namespace std;

struct Node{
	struct Node *prev;
	int data;
	struct Node *next;
};

void create(int a[], int n){
	struct Node *t, *last;
	int i;
	t = new Node;
	t->data = 
}