#include<bits/stdc++.h>


using namespace std;

struct node{
int data;
node * next;
};


void add(node ** ptr, int data){

//node * temp1 = *ptr;

node * temp = new node;
temp->data= data;
temp->next = *ptr;

*ptr = temp;
}


void deletes(node ** ptr , int data){

node * prev=(*ptr);
node * temp = prev->next;

if(prev->data==data){
prev = prev->next;
*ptr = prev;
return  ;
}


while(temp->data!=data){
prev = temp;
temp = temp->next;
}

prev->next = temp->next;

}





void print(node *head){
while(head!=nullptr){
cout<<head->data<<" ";
head = head->next;
}

}

void add_my(node **head , int data){

node * prev = *head;

node * ptr = prev->next; // save the address value

node * temp = new node ;
temp->data = data;
temp->next = nullptr;


if( (prev->data) > data){
temp->next = prev;
prev = temp;
return ;
}


//ptr = ptr->next;

while( (ptr->data) < data){
prev = ptr;
ptr = ptr->next;
}

prev->next = temp;
temp->next = ptr;

}


int main(){

node * head = nullptr;

for(int i=0; i<10; i++){
add(&head,i);
}

add_my(&head , 10);


print(head);	


	return 0;
}