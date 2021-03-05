#include<iostream>
using namespace std;


struct Node{
    int data;
    Node *next;
}*top = NULL;

void push(int x){
    struct Node *t;
    t = new Node;
    if(t == NULL){
        cout<<"Stack Full";
    }
    else{
        t->data = x;
        t->next = top;
        top = t;
    }
}

int pop(){
    int x = -1;
    struct Node *t;
    if(t == NULL){
        cout<<"Stack Empty";
    }
    else{
        t = top;
        x = top->data;
        top = top->next;
        free(t);
    }
    return x;
}

void display(){
    struct Node *p;
    p = top;
    while(p!=NULL){
        cout<<p->data<<'\n';
        p = p->next;
    }
}

int isOperand(char x){
    if(x == '+' || x == '-' ||x == '*' ||x == '/' ){
        return 0;
    }
    else{
        return 1;
    }
}


int Evaluate(char *postfix){
    int i=0,x1,x2,r;
    for(i = 0; postfix[i]!='\0'; i++){
        if(isOperand(postfix[i])){
            push(postfix[i]-'0');
        }
        else{
            x2 = pop();
            x1 = pop();
            switch(postfix[i]){
                case '+':
                    r = x1+x2; 
                    break;
                case '-':
                    r = x1-x2; 
                    break;
                case '*':
                    r = x1*x2; 
                    break;
                case '/':
                    r = x1/x2; 
                    break;
            }
            push(r);
        }
    }
    return top->data;
}

int main(){
    char postfix[] = "234*+82/-";
    cout<<"Result: "<<Evaluate(postfix)<<" ";
}