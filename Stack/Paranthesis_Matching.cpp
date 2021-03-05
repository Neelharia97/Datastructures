#include<iostream>
#include<string>
using namespace std;


struct Node{
    char data;
    struct Node *next;
}*top = NULL;

void push(char x){
    struct Node *t;
    t = new Node;
    if(t == NULL){
        cout<<"Stack Full";
    }
    else{
        t->data = x;
        t->next = top;
        top =t;
    }
}

char pop(){
    char x = -1;
    struct Node *t;
    if(t == NULL){
        cout<<"Stack Empty";
    }
    else{
        t = top;
        top = top->next;
        x = t->data;
        free(t);
    }
    return x;
}

int isBalanced(char *exp){
    for(int i = 0;exp[i]='\0';i++){
        if(exp[i]=='('){
            push(exp[i]);
        }
        else if(exp[i] == ')'){
            if(top == NULL){
                return 0;
            }
            pop();
        }
    }
    if(top == NULL){
        return  1;
    } 
    else{
        return 0;
    }
}

int main(){
    char exp[] = "((a+b)*(c+d))";
    cout<<isBalanced(exp);
    return 0;
}