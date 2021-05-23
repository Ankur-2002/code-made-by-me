#include<bits/stdc++.h>
using namespace std;


struct node{
int data ;
node *left;
node *right;

node(val)
{
data = val;
left = nullptr;
right = nullptr;
}
}

void inorder(node *root){
	
	node * current  = root;
	stack<node>ans;
	bool check = true;
	while(check)
	{
		if(current!=nullptr)
		{
			ans.push(current);
			current = current->next;			
		}
		else
		{
		if(!ans.empty())
		{
		node *temp = ans.pop();
		cout << temp ->data <<" ";
		current = current->right;
		}
		else 
		check  = false;			
		}
		
	}

}




int main(){

}