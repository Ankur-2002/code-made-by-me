#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
node * left;
node * right;

node(int d)
{
data = d;
left = nullptr;
right =nullptr;
}

};


void leftview(node * root)
{
	
queue<node *>q;
q.push(root);

while(!q.empty())
{

int n = q.size();

for(int i=1; i<=n; i++)
{
node * temp = q.front();
q.pop();

if(i==1)
cout<<temp->data<<" ";

if(temp->left!=nullptr)
q.push(temp->left);

if(temp->right!=nullptr)
q.push(temp->right);

}



}

}







int main()
{

node * root = new node(1);
root->left = new node(2);
root->right = new node(3);
root->left->right = new node(4);
root->right->right = new node(5);

leftview(root);
}