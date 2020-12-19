#include<bits/stdc++.h>

using namespace std;

struct node{
int data;
node * next;
};


node * add(node * ptr , int data){

node * temp = new node;

temp->data = data;

temp->next = ptr;

ptr = temp;

return ptr;
}



void print(node * ptr ){


while(ptr!=NULL){
cout<<ptr->data<<" ";
ptr = ptr->next;
}

}


void last(node * ptr, int data){

node *temp = new node;
temp->data = data;

while(ptr->next!=nullptr){
ptr =  ptr->next;
}

ptr->next = temp;
temp->next = NULL;

}


node * deletes(node * ptr){
ptr = ptr->next;
return ptr;
}

void deletekey(node **ptr,int key)
{
	node *temp= *ptr;		
	node *prev;
	if(temp->data==key)
	{
		temp=temp->next;
		*ptr=temp;
		return ;
	}	
	while(temp!=NULL && temp->data!=key)
	{
		prev=temp;
		temp=temp->next;
	}
	if(temp==NULL)
		return;	
	prev->next=temp->next;

}

int main(){

node * head = new node;
head->data = 3;
head->next = nullptr;


head = add(head, 2);
head = add(head , 1);
last(head,4);

last(head,5);

deletekey(&head,4);
//head = head->next;

//head =  deletes(head);

print(head);


return 0;
}
