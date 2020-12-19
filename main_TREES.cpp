#include<bits/stdc++.h>
using namespace std;

struct node{

int data;
node * left;
node * right;

node(int da){
data = da;
right = nullptr;
left = nullptr;
}
};


node *trees(){

int x;
cout<<"ENTER THE VALUE : ";
cin>>x;

if(x==-1)
return nullptr;


node * newNode = new node(x);



cout<<"ENTER THE LEFT CHILD VALUE OF "<<x << " NODE ";
newNode->left = trees();

cout<<"ENTER THE RIGHT CHILD VALUE OF "<<x<<" NODE";
newNode->right = trees();


return newNode;
}


void in_order(node * root){

if(root==nullptr)
return;
if(root->left!=nullptr)
in_order(root->left);


cout<<root->data;

if(root->right!=nullptr)
in_order(root->right);

}

void pre_order(node *root){

if(root==nullptr)
return ;

cout<<root->data;
pre_order(root->left);
pre_order(root->right);
}





int main(){

node * root;
root = trees();

in_order(root);
cout<<"\n";
pre_order(root);
	return 0;
}