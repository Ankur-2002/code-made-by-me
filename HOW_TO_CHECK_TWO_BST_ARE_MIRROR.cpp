#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
node * left;
node * right;

node(int d){
data = d;
left= nullptr;
right = nullptr;
}

};


/*
void add(node * root, int val)
{
if(root==nullptr)
return ;

if(root->data < val)
{
if(root->right==nullptr)
root->right=new node(val);

else
add(root->right,val);

}

if(root->data > val)
{

if(root->left==nullptr)
root->left = new node(val);

else 
add(root->left, val);

}

}
*/

//~~~USING NODE LEFT RIGHT~~

void print(node * root, vector<int>&a){
if(root==nullptr)
return;

a.push_back(root->data);

if(root->left!=nullptr)
print(root->left,a);

if(root->right!=nullptr)
print(root->right,a);
 
}

// ~~USING NODE RIGHT LEFT ~~


void prints(node * root, vector<int>&b){

if(root==nullptr)
return;

b.push_back(root->data);

if(root->right!=nullptr)
prints(root->right,b);

if(root->left!=nullptr)
prints(root->left,b);
 
}




int main(){
vector<int>a;
vector<int>b;

node * root = new node(1);
root->left = new node(3);
root->right = new node(2);
root->right->right = new node(4);
root->right->left = new node(5);


node * root2 = new node(1);
root2->left = new node(2);
root2->left->right = new node(5);
root2->left->left = new node(4);
root2->right = new node(3);


print(root,a);
prints(root2,b);


for(int i=0; i<a.size(); i++)
{
if(a[i]!=b[i]){
cout<<"NO IT'S NOT MIRROR";
break;
}
if(i==b.size()-1)
cout<<"YES, IT'S ITS A MIRROR TREE";
}

	return 0;
}
