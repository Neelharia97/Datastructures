#include<iostream>
using namespace std;

struct Queue{
    int size;
    int front;
    int rear;
    int *Q;
};


void create(struct Queue *q, int size){
    q->size = size;
    q->front = q->rear = -1;
    q->Q = new int[size];
}

void enqueue(struct Queue *q,int x){
    if(q->rear == q->size-1){
        cout<<"Full";
    }
    else{
        q->rear++;
        q->Q[q->rear] = x;
    }
}

int dequeue(struct Queue *q){
    int x =-1;
    if(q->front == q->rear){
        cout<<"Empty";
    }
    else{
        q->front++;
        x = q->Q[q->front];
    }
    return x;
}

void display(struct Queue q){
    for(int i = q.front+1; i<=q.rear; i++){
        cout<<q.Q[i]<<' ';
    }
    cout<<'\n';
}

int main(){
    struct Queue q;
    create(&q,5);

    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    enqueue(&q,40);

    display(q);

    dequeue(&q);

    display(q);

}