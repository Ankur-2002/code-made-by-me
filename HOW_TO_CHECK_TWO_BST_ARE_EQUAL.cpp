#include<bits/stdc++.h>

using namespace std;
	
	struct node{
	
	int data;
	node * left;
	node * right;

	node(int d){
	
	data = d;
	left = nullptr;
	right  = nullptr;
	}	

	};


	void add(node * root , int val)
	{
	
	if(root==nullptr){
	root = new node(val);
	return ;
	}
	
	if(root->data > val)
	{
	
	if(root->left==nullptr)
	root->left = new node(val);
	

	else
	add(root->left,val);

	}
			
	if(root->data < val)
	{
	
	if(root->right==nullptr)
	root->right = new node(val);
	

	else 
	add(root->right, val);

	}
		
	}

void print(node * root, vector<int>&a)
{

if(root==nullptr){
return ;
}

if(root->left!=nullptr)
print(root->left,a);

//cout<<root->data<<" ";
a.push_back(root->data);


if(root->right!=nullptr)
print(root->right,a);

}

int main(){

vector<int>a;
vector<int>b;

node * root = new node(4);
node * root2 = new node(6);

add(root, 3);
add(root, 6);

add(root2,3);
add(root2,4);

print(root,a);
cout<<"\n";
print(root2 ,b);

for(int i=0; i<a.size(); i++)
{
if(a[i]!=b[i]){
cout<<"no trees are not equal";
break;
}
if(i==b.size()-1)
cout<<"yes trees are equal ";
}

	return 0;
}