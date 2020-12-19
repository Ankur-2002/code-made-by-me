#include<iostream>
using namespace std;

struct node{
public : 
int data;
node * next;
};


node * add_at_end(node *ptr, int data){

node *temp = new node;
temp->data = data;
temp->next = nullptr;

ptr->next = temp;

return temp;
}

int main(){

node *head = new node;

head->data = 1;

head->next = nullptr;

node * ptr = head;

ptr = add_at_end(ptr, 2);
ptr = add_at_end(ptr,3);

ptr = head;

while(ptr!=nullptr){
cout<<ptr->data;
ptr = ptr->next;
}

return 0;
}