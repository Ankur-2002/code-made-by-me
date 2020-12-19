#include<bits/stdc++.h>

using namespace std;


struct node{
int data;
node * next;
};


node* at_add(node * ptr, int data){

node * temp = new node;
temp->data = data;
temp->next = ptr;

return temp;
}

void print(node * ptr){

while(ptr!=nullptr){
cout<<ptr->data;
ptr = ptr->next;
}

}


void deletes(node ** ptr, int key){
node * temp = *ptr;
node * prev = (*ptr);

if(temp->data==key){
*ptr = temp->next;
return ;
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
head->next = nullptr;

for(int i=0; i<5; i++){
if(i==0)
head->data = i;

else 
ptr = at_add(ptr, i);
}

head = ptr;

deletes(&head , 0);

print(head);

return 0;
}