#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};

class HashTable{
    public:
      Node** HT;
      HashTable();
      int hash(int key);
      void insert(int key);
      int search(int key);
      ~HashTable();
};
HashTable::HashTable(){
    HT = new Node* [10];
    for(int i = 0; i<10; i++){
        HT[i] = nullptr;
    }
}

int HashTable::hash(int key){  //generates hash code
    return key%10;
}

void HashTable::insert(int key){
    int hIdx = hash(key); //Create Hashcode
    Node* t = new Node;
    t->data = key; //Data to be inserted in hashtable
    t->next = nullptr;
    if(HT[hIdx]==nullptr){ //if no linked list at this particular place of array, assign node t
        HT[hIdx] = t;
    }
    else{
        Node* p = HT[hIdx];
        Node* q = HT[hIdx];
        while(p && p->data<key){
            q=p;
            p = p->next;
        }
        if(q == HT[hIdx]){
            t->next = HT[hIdx];
            HT[hIdx] = t;
        }
        else{
            t->next = q->next;
            q->next = t;
        }

    }
}


int HashTable::search(int key){
    int hIdx = hash(key);
    Node* p = HT[hIdx];
    while(p){
        if(p->data == key){
            return p->data;
        }
        p=p->next;
    }
    return -1;
}

HashTable::~HashTable(){
    for(int i = 0; i<10; i++){
        Node* p = HT[i];
        while(HT[i]){
            HT[i] = HT[i]->next;
            delete p;
            p = HT[i];
        }
    }
    delete []HT;
}


int main(){
    int A[] = {16, 12, 25, 39, 6, 122, 5, 68, 75};
    int n = sizeof(A)/sizeof(A[0]);
    HashTable H;
    for(int i = 0; i<n; i++){
        H.insert(A[i]);
    }
    int key;
    cin>>key;
    if(H.search(key) == -1){
        cout<<"Unsuccessful search";
    }
    else{
        cout<<"Success: "<<H.search(key);
    }

}