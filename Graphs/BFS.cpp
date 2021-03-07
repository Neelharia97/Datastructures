#include<iostream>
//#include "Queue_LL_h.h"
using namespace std;



struct Node{
    int data;
    Node *next;
}*front = NULL, *rear = NULL;

void enqueue(int x){
    struct Node *t;
    t = new Node;
    if(t == NULL){
        cout<<"Full Queue";
    }
    else{
        t->data = x;
        if(front == NULL){
            front = rear = t;
        }
        else{
            rear->next = t;
            rear = t;
        }
    }
}

int dequeue(){
    int x = -1;
    struct Node *t;
    if (front == NULL){
        cout<<"Queue is Empty";
    }
    else{
        t = front;
        x = front->data;
        front = front->next;
        free(t);
    }
    return x;
}
int isEmpty(){
    if(front == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

void BFS(int G[][7],int start, int n){
    int i = start;
   // struct Queue q;
    int visited[7] = {0};
    cout<<i<<"\n";
    visited[i] = 1;
    enqueue(i);
    while(isEmpty() == 0){
        i = dequeue();
        for(int j=1;j<n;j++){
            if(G[i][j] ==1 && visited[j] == 0){
                cout<<j<<" ";
                visited[j] = 1;
                enqueue(j);
            }
        } 
    }
}

void DFS(int G[][7], int start, int n){
    static int visited[7] = {0};
    if(visited[start]==0){
        cout<<start<<" ";
        visited[start]=1;
        for(int j = 1; j<n;j++){
            if(G[start][j] == 1  && visited[j]==0){
                DFS(G,j,n);
            }
        }
    }

}

int main(){
    int G[7][7] = 
{{0,0,0,0,0,0,0},
 {0,0,1,1,0,0,0},
 {0,1,0,0,1,0,0},
 {0,1,0,0,1,0,0},
 {0,0,1,1,0,1,1},
 {0,0,0,0,1,0,0},
 {0,0,0,0,1,0,0}};

 DFS(G,3,7);
 BFS(G,1,7);
 return 0;


}
