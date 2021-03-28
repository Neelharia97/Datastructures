#include<iostream>
#include<string>
using namespace std;

class Node{
    public:
    char data;
    Node* next;
    
};

class Stack{
    private:
        Node* top;
    public:
        Stack();
      
        void display();
        void push(char x);
        char pop();
        int isEmpty();
        int isFull();
        int counter(char d);
        string Checker(string a);
};
Stack::Stack(){
    top == nullptr;}

void Stack :: push(char x){
    Node *t = new Node;
    if(t == NULL){
        cout<<"Stack Full"<<endl;
    }
    else{
        t->data = x;
        t->next = top;
        top = t;
    }
}

void Stack::display(){
    Node *t = new Node;
    t = top;
    while(t != NULL){
        cout<<t->data<<" ";
        t = t->next;
    }
    cout<<'\n';
}

char Stack :: pop(){
    Node *p = new Node;
    char x = '0';
    if(top == NULL){
        cout<<"Stack Empty"<<endl;
    }
    else{
        p = top;
        x = p->data;
        top = top->next;
        free(p);
    }
    return x;
}

int Stack :: isEmpty(){
    if(top == NULL){
        return 1;
    }
    return 0;
}

int Stack :: isFull(){
    Node *t = new Node;
    if(t == NULL){
        return 1;
    }
    return 0;
}

int Stack :: counter(char d){
    int count1 = 0;
    int count2 = 0;
    if(d == '(' || d == '{'){
        if(d == '('){
            count1 +=1;
        }
        count2+=1;
    }
    else if(d == ')' || d == '}'){
        if( d == ')'){
            count1 -=1;
        }
        count2 -=1;
    }
    return count1 - count2;
}


string Stack :: Checker(string s){
    Stack n;

    for(int i = 0; i<s.length(); i++){
        if(s[i] == '(' || s[i] == '{'){
            n.push(s[i]);  
            //n.counter(s[i]);
        }
        else if(s[i] == ')' || s[i] == '}'){
            if(n.isEmpty()){
                return "Unequal";
            }
            else{

                n.pop();
                
            }
        }
    }
    if(n.isEmpty()){
            return "equal";
    }
    
    return "Unequal"; 

}



int main(){
    Stack a;
    cout<<a.Checker("{()}{}{{()()}()}");
}