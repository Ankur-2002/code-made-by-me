#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
node * next;
};

node * add(node * ptr , int data){

node * temp = new node;
temp->data = data;
ptr->next = temp;
temp->next = nullptr;
return temp;
}

void print(node * ptr){
while(ptr!=nullptr){
cout<<ptr->data;
ptr = ptr->next;
}

}

void deletea(node ** ptr, int key){
node * temp = *ptr;
node * prev;

if(temp->data==key){
temp = temp->next;
*ptr = temp;
return;
}

while(temp->data!=key){
prev = temp;
temp = temp->next;
}

prev->next = temp->next;

}

int main(){

node * head = new node;
node * ptr = head;
 for(int i=1; i<5; i++)
	if(i==1)
	head->data = i;
	else
	ptr = add(ptr,i);

//ptr = head;
deletea(&head,1);
print(head);


}