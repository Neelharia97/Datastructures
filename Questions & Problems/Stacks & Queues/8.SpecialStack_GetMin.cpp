#include<iostream>
using namespace std;

class Stack{
    private:
        int size;
        int arr[10];
        int top;
    public:
        Stack(){top =-1;}
        bool isEmpty();
        bool isFull();
        int pop();
        void push(int x);

};

bool Stack::isEmpty(){
    if(top == -1){
        return true;
    }
    return false;
}

bool Stack::isFull(){
    if(top == size-1){
        return true;
    }
    return false;
}

void Stack::push(int x){
    if(isFull()){
        cout<<"Stack Overflow"<<endl;
        abort();
    }
    top++;
    arr[top] = x;
    
}
int Stack::pop(){
    int x = -1;
    if(isEmpty()){
        cout<<"Stack Underflow"<<endl;
        abort();
    }
    x = arr[top];
    top--;
    return x;
}

class SpecialStack : public Stack{
        Stack min;
    public:
        int pop();
        void push(int x);
        int getMin();
};

void SpecialStack:: push(int x){
    if(isEmpty()){
        Stack::push(x);
        min.push(x);
    }
    else{
        Stack :: push(x);
        int y  = min.pop();
        min.push(y);
        if(x<y){
            min.push(x);
        }
        else{
            min.push(y);
        }
    }
}

int SpecialStack :: pop(){
    int x = Stack::pop();
    min.pop();
    return x;
}

int SpecialStack::getMin(){
    int x = min.pop();
    min.push(x);
    return x;
}

int main(){
    
    SpecialStack s;
    s.push(10);
    s.push(20);
    s.push(5);
    s.push(16);
    s.push(112);
    s.push(13);

    cout<<s.getMin()<<endl;

}