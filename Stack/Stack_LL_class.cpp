#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
};

class Stack{
    private:
        Node *top;
    public:
        Stack(){
            top = NULL;
        }
        void push(int x);
        int pop();
        void display();
};

void Stack :: push(int x){
    Node *t = new Node;
    if(t == NULL){
        cout<<"Stack Full";
    }
    else{
        t->data = x;
        t->next = top;
        top = t;
    }
}

int Stack :: pop(){
    int x = -1;
    if(top == NULL){
        cout<<"stack is empty";
    }
    else{
        x = top->data;
        top = top->next;
    }
    return x;
}

void Stack :: display(){
    Node *p =top;
    while(p!=NULL){
        cout<<p->data<<' ';
        p = p->next;
    }
    cout<<endl;

}

int main(){
    Stack st;
    st.push(10);
    st.push(10);
    st.push(10);
    st.display();
    st.pop();
    st.display();
}