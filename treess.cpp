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




void in_postorder(node * root){

if(root==nullptr)
return ;

if(root->left!=nullptr)
in_postorder(root->left);

if(root->right!=nullptr)
in_postorder(root->right);

cout<<root->data;

}






node *tress(){

int x;
cin>>x;

node * nodeNode = new node(x);

if(x==-1)
return nullptr;

cout<<"ENTER THE LEFT SIDE VALUE "<<x<<"\n";
nodeNode->left = tress();

cout<<"ENTER THE RIGHT VALUE "<<x << "\n";
nodeNode->right = tress();

return nodeNode;

}


int main(){

node *root = nullptr;
root = tress();
	
	in_postorder(root);
	
	return 0;
}