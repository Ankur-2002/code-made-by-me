#include<bits/stdc++.h>

using namespace std;

struct node {
int data;
node * left;
node * right;

node(int d){

data = d;
left = nullptr;
right = nullptr;
}

};
/*
void inorder(node * root){

if(root->left!=nullptr)
inorder(root->left);

cout<<root->data;

if(root->right!=nullptr)
inorder(root->right);

}

*/

void preorder(node * root)            // N  L  R
{

cout<<root->data;

if(root->left!=nullptr)
preorder(root->left);

if(root->right!=nullptr)
preorder(root->right);

}



int main(){

node * root = new node(1);
root->left = new node(2);
root->right = new node(3);
root->left->left = new node(4);
root->left->right = new node(5);
root->right->left  = new node(6);
root->right->right = new node(7);

//inorder(root);
preorder(root);

return 0;
}