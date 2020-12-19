#include<bits/stdc++.h>
using namespace std;


struct node{
int data;
node * next;
};

void print(node * ptr){
while(ptr!=nullptr){
cout<<ptr->data;
ptr = ptr->next;
}
}


void in_end(node ** ptr){

node * temp = (*ptr);

while(temp->next->next != NULL){
temp = temp->next;
}
temp->next = NULL;

}

int main(){

node * head = new node;
head->data =  1;
node * second = new node;
second->data = 2;
head->next = second;
node * third = new node;
third->data = 3;
second->next = third;
third->next = NULL;

in_end(&head);

print(head);

return 0;
}