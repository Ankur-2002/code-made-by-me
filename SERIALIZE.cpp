#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
node * left;
node * right;

node(int d){
data  = d;
left = nullptr;
right = nullptr;
}

};

void add(node *root, int val){
if(root==nullptr)
return ;

if(root->data < val){

if(root->right==nullptr)
root->right = new node(val);

else 
add(root->right,val);

}

if(root->data > val){

if(root->left==nullptr)
root->left = new node(val);

else
add(root->left, val);

}


}

void serialize(node *root, vector<int>& values){

if(root==nullptr){
values.push_back(-1);
return ;
}



//PRE_ORDER TREVERSAL USED IN THIS QUESTION !!!!!



values.push_back(root->data);

serialize(root->left, values);

serialize(root->right, values);
}



void deserialize(node * root ,int val){

if(val==-1){
//root = new node(val);
return ;
}

if(root->data < val)
{
if(root->right==nullptr)
root->right = new node(val);

else
deserialize(root->right , val);

}

if(root->data > val)
{
if(root->left==nullptr)
root->left = new node(val);

else 
deserialize(root->left, val);
}


}


void print(node * root){

if(root==nullptr)
return ;

if(root->left!=nullptr)
print(root->left);

cout<<root->data<<" ";

if(root->right!=nullptr)
print(root->right);

}






int main(){

node * root = new node(5);
vector<int>serializes;

add(root, 1);
add(root, 2);
add(root, 6);
add(root, 7);

serialize(root , serializes);

//~~~  for checking my code is working or not but is fully working   ~~~

for(auto i : serializes)
cout<<i<<" "; 

cout<<"\n";


node * root2 = new node(serializes[0]);

	for(int i=1; i<serializes.size(); i++)
	
	deserialize(root2,serializes[i]);

print(root);
cout<<"\n";
print(root2);
	
	
	return 0;

}