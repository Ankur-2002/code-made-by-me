#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
node * left;
node* right;

node(int d)
{
data = d;
left = nullptr;
right = nullptr;
}

};


void add(node * root, int x)
{

if(root==nullptr)
return ;

if(root->data > x)
{
if(root->left!=nullptr)
add(root->left,x);

else 
root->left = new node(x);
}

if(root->data < x)
{
if(root->right!=nullptr)
add(root->right,x);

else 
root->right = new node(x);
}


}

void print(node * root)
{
if(root==nullptr)
return ;

if(root->left!=nullptr)
print(root->left);

cout<<root->data<<" ";

if(root->right!=nullptr)
print(root->right);

}

bool subtree(node * root , node * sub)
{

if(sub==nullptr)
return true;

if(root==nullptr)
return false;


if(root->data!=sub->data)
return false;

return subtree(root->left, sub->left) && subtree(root->right, sub->right);
}



bool select(node * root, node * sub)
{
queue<node *>q;
q.push(root);

while(!q.empty())		
{	
	node * current = q.front();	
	
	if(current->data == sub->data){
	if(subtree(current, sub))
	return true;
	}
	
	if(current->left!=nullptr)
	q.push(current->left);
	
	if(current->right!=nullptr)
	q.push(current->right);

	q.pop();
		
	}	
	
return false;
}








int main()
{
/*node * root = new node(5);
for(int i=1; i<5; i++)
add(root,i);

node * root1 = new node(5);
for(int i=1; i<5; i++)
add(root1,i);


//cout<<subtree(root, root1);

//print(root);

*/

//MAKE MY TREE !!

node * root = new node(26);
root->left = new node(10);
root->right  = new node(3);
root->left->left = new node(4);
root->left->right = new node(6);
root->left->left->right = new node(30);
root->right->right = new node(3);

//print(root);

node *root1 = new node(10);
root1->left = new node(4);
root1->left->right  = new node(30);
root1->right =  new node(6);


cout<<select(root,root1);

	return 0;
}












