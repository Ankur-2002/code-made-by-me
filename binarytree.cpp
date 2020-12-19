#include<bits/stdc++.h>
using namespace std;

struct node{

int data;
node * left;
node * right;

node (int d){ 
data = d;
left =  nullptr;
right = nullptr;
}

};


void print(node * root){
	if(root->left!=nullptr)
	print(root->left);
	
	cout<<root->data;

	if(root->right!=nullptr)
	print(root->right);	
}




int main(){

node * root = new node(1);
root->left = new node (2);
root->right = new node(3);
	
print(root);

	return 0;	
}