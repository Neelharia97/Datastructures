#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;


struct Node{
    char data;
    Node *next;
}*top = NULL;


void display(){
    struct Node *p;
    while(p!=NULL){
        cout<<p->data<<'\n';
        p = p->next;
    }
}

void push(char x){
    struct Node *t;
    t = new Node;
    if(t == NULL){
        cout<<"Stack Full";
    }
    else{
        t->data =x;
        t->next = top;
        top = t;
    }
}

char pop(){
    char x = '1';
    struct Node *t;
    if (t == NULL){
        cout<<"Stack Empty";
    }
    else{
        t = top; //copy top pointer to free later
        x = top->data;
        top = top->next;  //new top is orignal top's next node
        free(t);
    }
    return x;
}

int pre(char x){
    if(x == '+' || x == '-'){
        return 1;
    }
    else if(x == '*' || x == '/'){
        return 2;
    }
    return 0;
}

int isOperand(char x){
    if(x == '+' || x == '-' ||x == '*' ||x == '/' ){
        return 0;
    }
    else{
        return 1;
    }
}

char  *InToPost(char *infix){
    
    int len = sizeof(infix);
    char *postfix = new char[sizeof(infix)+2];
    int i = 0,  j = 0;
    while(infix[i]!='\0'){
        if(isOperand(infix[i])){
            postfix[j++] = infix[i++];
        }
        else{
            if(pre(infix[i])>pre(top->data)){
                push(infix[i++]);
            }
            else{
                postfix[j++] = pop();
            }
        }
    }
    while(top != NULL){
        postfix[j++] = pop();
    }
    postfix[j] = '\0';
    return postfix;
}

int main(){
    char infix[] = "a+b+c+d/e";
    push('#');
    char *postfix= InToPost(infix);
    cout<<postfix;
}