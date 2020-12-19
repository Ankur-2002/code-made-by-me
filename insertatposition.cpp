#include<bits/stdc++.h>

using namespace std;

struct node{
int data;
node * next;
};

void at_beg(node * ptr, int data){
node * temp = new node;
temp->data = data;

while(ptr->next!=nullptr){
ptr = ptr->next;
}

ptr->next = temp;
temp->next = nullptr;
}


void add(node **ptr , int pos, int data){

node * temp1 = *ptr;

node * temp = new node;
temp->data = data;
temp->next = nullptr;

pos--;
while(pos > 1 ){
temp1 = temp1->next;
pos--;
}

temp->next = temp1->next;
temp1->next= temp;
}


int main(){

node * head = new node;
head->data = 1;
head->next = nullptr;

for(int i=2; i<6; i++){
at_beg(head, i);
}

add(&head , 0 , 19);

while(head!=nullptr){
cout<<head->data;
head = head->next;
}

return 0;
}