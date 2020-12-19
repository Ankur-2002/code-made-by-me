#include<bits/stdc++.h>
using namespace std;

	struct node{
	int data;
	node * next;
	node(int d){
	data = d;
	next = nullptr;
	}
	};


	void add(node **ptr , int data, int pos){
	node * temp = new node(data);
	if(pos==1){
	temp->next = *ptr;
	*ptr = temp;
	return ;
	}
	node * prev = *ptr;
	node * temp1 = *ptr;
	int index=1;
	while(temp1->next!=nullptr && index!=pos)
	{
	prev = temp1;
	temp1 = temp1->next;
	index++;
	}
	
	prev->next = temp;
	temp->next = temp1;
	
	*ptr = temp1;
return ;
	}


	void print(node * ptr){
	while(ptr!=nullptr){
	cout<<ptr->data;
	ptr = ptr->next;
	}
	}


int main(){
node * head = new node(1);
add(&head,0,1);
add(&head,2,2);
print(head);
}