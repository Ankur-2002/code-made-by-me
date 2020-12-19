#include<bits/stdc++.h>
using namespace std;



struct node{
int data;
node * next;
};


void add_at_end(node *ptr, int data){

node * temp = new node; 
temp->data = data;

while(ptr->next!=nullptr){
ptr = ptr->next;
}

ptr->next = temp;
temp->next = nullptr;

}

void print(node * ptr){
while(ptr!=nullptr)
{
cout<<ptr->data;
ptr = ptr->next;
}
}


void deletea(node * ptr , int key)
{

node * temp = ptr;
node * prev;


if(temp->data==key){
temp = temp->next;
return ;
}


while(temp->data!=key){
prev = temp;
temp = temp->next;
}

prev->next = temp->next;

}


void deletes(node ** ptr , int pos){
int i=1;
node * temp = *ptr;
node * prev;

if(pos==i){
temp = temp->next;
*ptr = temp;
return ;
}

while(i!=pos && temp!=nullptr){
	prev = temp;
	temp = temp->next;
	i++;
}

if(pos > i)
prev->next = nullptr;

else
prev->next = temp->next;

}



//DRIVER PROGRAM
int main(){

node * head = new node;
node * ptr = head;
head->data = 1;
head->next = nullptr;

for(int i=2; i<5; i++){
add_at_end(head,i);
}

deletes(&head,21);

print(head);

}