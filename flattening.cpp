#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
node *next;	
node *bottom;	
		
node(int d)
{
data = d;
next = nullptr;
bottom = nullptr;
}
};

void print(node *head)
{

while(head!=NULL)
{
node *ptr = head;
while(head!=nullptr)
{
cout<<head->data<<" ";
head=head->bottom;
}
head = ptr;
head = head->next;
cout<<"\n";
}



}


	

int main(){
	
	node *head = new node(1);
	
	node *save = head;
	
	node *ptr = head;
		
	int j=1;
	while(j< 5){
	
	for(int i=0; i<5;i++)
	{
	ptr->bottom = new node(i);
	ptr=ptr->bottom;
	}
j++;
	if(j<5){
	head->next =new node(j);
	head = head->next;
	ptr = head;
	
}
	}
	

	print(save); 
	
	return 0;
	}