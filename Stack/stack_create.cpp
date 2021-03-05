
#include<iostream>
using namespace std;

struct stack{
    int size;
    int top;
    int *S;
};
void display(struct stack st){
    for(int i = 0; i<st.size; i++){
      //  cout<<sizeof(st.S)<<' ';
        cout<<st.S[i]<<' ';
    }
}
void create(struct stack *st){
    cout<<"Enter Size";
    st->size = 5;
    st->top = -1; // top points at -1 initially
    st->S = new int[st->size]; //create stack array dynamically using size
}

int pop(struct stack *st){
    int x = -1;
    if(st->top == -1){
        cout<<"Stack Underflow";
    }
    else{
        x = st->S[st->top--];
        st->size--;
       // st->top--;
    }
   return x;
}

void push(struct stack *st,int val){
    if(st->top == st->size - 1){
        cout<<"Stack overflow";
    }
    else{
        st->top++;
        st->S[st->top] = val; 
    }

}

int peek(struct stack st,int pos){
    int x = -1;
    if(st.top - pos + 1< 0){
        cout<<"Invalid position";
    }
    else{
        x = st.S[st.top-pos+1];
    }
    return x;
}

int isEmpty(struct stack st){
    if(st.top == -1){
        return 1;
    }
    return 0;
}

int isFull(struct stack st){
    if(st.top == st.size -1){
        return 1;
    }
    return 0;
}

int main(){
    struct stack st;
    create(&st);
    cout<<isFull(st)<<'\n';
    cout<<isEmpty(st)<<'\n';
    push(&st, 10);
    push(&st, 20);
    push(&st, 30);
    push(&st, 40);
    push(&st, 50);
    display(st);
    cout<<"Peek"<<peek(st,3);
    cout<<pop(&st)<<'\n';

    display(st);
    cout<<isFull(st)<<'\n';
    cout<<isEmpty(st)<<'\n';
}