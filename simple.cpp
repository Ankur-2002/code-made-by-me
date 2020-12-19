#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
node * left;
node * right;

node(int d){
data = d;
right = nullptr;
left = nullptr;
}
                                                                                                                                                                
};

node * add(){

int x;
cin>>x;
if(x==-1)
return nullptr;

node * NewNODE = new node(x);

cout<<"ENTER THE LEFT SIDE OF " <<x <<" ";
NewNODE->left = add();

cout<<"ENTER THE RIGHT SIDE OF "<<x <<" ";
NewNODE->right  = add();

return NewNODE;
}

void in_order(node * root){
if(root==nullptr)
return ;

if(root->left!=nullptr)
in_order(root->left);

cout<<root->data;

if(root->right!=nullptr)
in_order(root->right);

}



node * findpath(node * root , int n, int n1){

if(root==nullptr)
return nullptr;

if(root->data==n || root->data==n1)
return root;


node * leftLCA  = findpath(root->left,n,n1);
node * rightLCA = findpath(root->right , n, n1);


if(leftLCA && rightLCA)
return root;


return (leftLCA !=nullptr) ? leftLCA : rightLCA;


return nullptr;
}



int path(node * LCA, int n, int count){

if(LCA==nullptr)
return -1;

if(LCA->data==n)
return count;


int d = path(LCA->left,n, count+1);

if(d!=-1)
return d;

d = path(LCA->right, n, count+1);

return d;
}








int main(){

node * root = nullptr;
root = add();

in_order(root);
cout<<"\n";
node * LCA = findpath(root,3,1);
int count = 0;
cout<<path(LCA , 3,count)+path(root,1,count);

	return 0;
}