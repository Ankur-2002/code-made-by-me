#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
node * left;
node * right;

node(int d){
data = d;
left = nullptr;
right = nullptr;
}

};


void add(node * root,int x){

//node * NewNode = new node(x);


if(root==nullptr){
root = new node(x);
return ;
}

if(root->data < x){
if(root->right==nullptr){
root->right = new node(x);
}
else
add(root->right,x);
}

if(root->data > x){
if(root->left==nullptr)
root->left=new node(x);

else
add(root->left,x);

}

}

void print(node *root){

if(root==nullptr)
return ;

if(root->left!=nullptr)
print(root->left);

cout<<root->data;

if(root->right!=nullptr)
print(root->right);

}






int main(){

node * root = nullptr;

root = new node(1);
add(root,2);
add(root,0);
add(root,-1);
add(root,5);


print(root);
	return 0;
}