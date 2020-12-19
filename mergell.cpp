#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node *next;
	Node(int d)
	{
		data=d;
		next=NULL;
	}
};
Node* merge(Node *h1,Node *h2 )
{
	if(h1->data>h2->data)
		swap(h1,h2);
	Node *temp = h1;
	while(h1!=NULL && h2!=NULL)
	{
		Node * prev;
		while(h1!=NULL && h1->data<h2->data)
		{
			prev=h1;
			h1=h1->next;
		}
		prev->next=h2;
		swap(h1,h2);
	}
	return temp;
}
void print( Node * temp)
{
	while(temp!=NULL)
	{
		cout<<temp->data;
		temp=temp->next;
	}
}
int main()
{
	Node *head1 = new Node(1);
	head1->next=new Node(3);
	head1->next->next=new Node(5);
	Node *head2 = new Node(2);
	head2->next=new Node(2);
	head2->next->next=new Node(4);
	head2->next->next->next=new Node(4);
	Node *ans=merge(head1,head2);
	print(ans);
	return 0;
}