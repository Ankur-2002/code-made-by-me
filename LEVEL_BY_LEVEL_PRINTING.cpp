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


node *add(){
int x;
cin>>x;

if(x==-1)
return nullptr;

node * temp = new node(x);

cout<<"ENTER THE LEFT SIDE OF VALUE "<<x<<" ";
temp->left = add();

cout<<"ENTER THE RIGHT SIDE OF VALUE "<<x<<" ";
temp->right = add();

return temp;
}


void level_by_level(node * root)
{
if(root==nullptr)
return ;
queue<node *>q;
q.push(root);
	while(!q.empty())	
	{
	node * current = q.front();
	cout<<current->data<<"\n";
	if(current->left!=nullptr)
	q.push(current->left);
	if(current->right!=nullptr)
	q.push(current->right);
	q.pop();

	}

}


int main()
{

node * root = add();

level_by_level(root);

}