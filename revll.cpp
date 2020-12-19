#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node* next;
	Node (int d)
	{
		data=d;
		next=NULL;
	}
};
Node* rev (Node *head)
{
	Node* prev=head;
	Node* temp=head->next;
	prev->next=NULL;
	while(temp!=NULL)
	{
		head=temp;
		temp=temp->next;
		head->next=prev;
		prev=head;
	}
	return head;
}
void print(Node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
}
int main()
{
	Node *head=new Node(1);
	head->next=new Node(2);
	head->next->next=new Node(3);
	head->next->next->next=new Node(4);
	head->next->next->next->next=new Node(5);
	print(head);
	head=rev(head);
	cout<<"\n";
	print(head);

	return 0;
}