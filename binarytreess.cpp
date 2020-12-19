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

node *create(node * root)
{
int x;
cin>>x;
root = new node(x);
return root;
}

void add(node root , int val)
{
if(root==nullptr)
return ;

if(root->data < val)
{
if(root->right !=nullptr)
add(root->right, val);

else
root->left = new node(val);
}

if(root->data > x)
{
if(root->left !=nullptr)
add(root->left,val);

else
root->left = new node(val);
}


}



int main()
{

node * root = nullptr;
root = create(root);
for(int i=0; i<6; i++)
add(root , i);
}