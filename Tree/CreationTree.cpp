#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
        Node* lchild;
        int data;
        Node* rchild;
};

class Tree{
    private:
        Node* root;
    public:
        Tree();
        ~Tree();
        void CreateTree();
        void preorder(Node* p);
        void preorder(){preorder(root);}
        void inorder(Node* p);
        void inorder(){inorder(root);}
};

Tree::Tree(){
    root = nullptr;
}
Tree::~Tree(){
 //   root = nullptr;
}

void Tree::CreateTree(){
    Node* p;
    Node* t;
    int x;
    queue<Node*> q;
    root = new Node;
    cout<<"Enter root data: "<<flush;
    cin>>x;
    root->data =x;
    root->lchild = nullptr;
    root->rchild = nullptr;
    q.emplace(root);
    while(!q.empty()){
        p = q.front();
        q.pop();

        cout<<"Enter Left child of "<<p->data<<": "<<endl;
        cin>>x;
        if(x != -1){
            t = new Node;
            t ->data = x;
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->lchild = t;
            q.emplace(t); 
        }
        
        cout<<"Enter Right child of "<<p->data<<": "<<endl;
        cin>>x;
        if(x != -1){
            t = new Node;
            t ->data = x;
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->rchild = t;
            q.emplace(t); 
        }
    }
}

void Tree::preorder(Node* p){
    if(p){
        cout<<p->data<<" ";
        preorder(p->lchild);
        preorder(p->rchild);
    }
    cout<<endl;
} 

void Tree::inorder(Node* p){
    if(p){
        inorder(p->lchild);
        cout<<p->data<<" ";
        inorder(p->rchild);
    }
    cout<<endl;
} 
int main(){
    Tree a;
    a.CreateTree();
    a.preorder();
    a.inorder();
}