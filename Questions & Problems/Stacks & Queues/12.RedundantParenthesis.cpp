#include<iostream>
#include<string>
using namespace std;

struct Node{
    char data;
    struct Node *next;

}*top;

void display(){
    struct Node *d;
    d = top;
    while(d){
        cout<<d->data<<" ";
        d = d->next;
    }
    cout<<endl;
}

bool isEmpty(){
    if(top == NULL){
        return true;
    }
    else{
        return false;
    }
}

bool isFull(){
    struct Node *s;
    s = new Node;
    if(s == NULL){
        return true;
    }
    else{
        return false;
    }
}

void push(char x){
    struct Node *t;
    t = new Node;
    if(t == NULL){
        cout<<"Stack is Full"<<endl;
    }
    else{
        t->data = x;
        t->next = top;
        top = t;
    }
}

char pop(){
    char x = '0';
    struct Node *p;
    if(top == NULL){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        p = top;
        top = top->next;
        x =p->data;
        free(p);
    }
    return x;
}

bool checkRedundancy(string &str){
    for(auto &ch : str){
    if (ch == ')'){
        char top1 = top->data;
        pop();
        bool flag = true;
        while(isEmpty() == false && top->data != '('){
            if(top1 == '+' || top1 == '-' || top1 == '*' || top1 == '/'){
                flag = false;
            }
            top1 = top->data;
            pop();
        }
        if(flag == true){
            return true;
        }
    }
    else{
        push(ch);
    }
   
    }
    return false;
}

void findRedundant(string &str){
    bool ans = checkRedundancy(str);
    if(ans == true){
        cout<<"Redundant"<<endl;
    }
    else{
        cout<<"Not Redundant"<<endl;
    }
}

int main(){
    string str = "((a+b))";
    findRedundant(str);
   // display();
}