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



void add(node * root, int val){

if(root==nullptr){
root = new node(val);
return ;
}

if(root->data > val){

if(root->left==nullptr){
root->left = new node(val);

}

else 
add(root->left, val);

}

if(root->data <= val){

if(root->right==nullptr){
root->right = new node(val);
}


else 
add(root->right , val);

}


}

void print(node * root){
cout<<"1";
if(root==nullptr)
return ;


if(root->left!=nullptr)
print(root->left);

cout<<root->data;

if(root->right!=nullptr)
print(root->right);

}



int main(){
node * root = nullptr;

for(int i=0; i<5; i++){
int a;
cin>>a;
add(root, a);
}

print(root);

	return 0;
}