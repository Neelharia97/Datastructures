#include<iostream>
using namespace std;

struct BstNode{
    int data;
    struct BstNode* left;
    struct BstNode* right;
};

BstNode* GetNewNode(int data){
    BstNode* newNode = new BstNode();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
} 

BstNode* Insert(BstNode* root, int data){
    if(root == NULL){
        root = GetNewNode(data);
    }
    else if(data<=root->data){
        root->left = Insert(root->left,data);
    }
    else{
        root->right = Insert(root->right,data);
    }
    return root;
}

bool search(BstNode* root, int data){
    if(root == NULL){
        return false;
    }
    else if(root->data == data){
        return true;
    }
    else if(data<=root->data){
        return search(root->left, data);
    }
    else{
        return search(root->right, data);
    }

}

int main(){
    BstNode* root = NULL;
    root = Insert(root, 10);
    root = Insert(root, 150);
    root = Insert(root, 50);
    root = Insert(root, 30);
    root = Insert(root, 20);

    int number;
    cin>>number;
    if(search(root,number)==true){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
}