#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
node * next;
};

node * rev(node * ptr){
node * prev =  ptr;
node * temp = ptr->next;

prev->next = nullptr;

while(temp!=nullptr){
ptr = temp;
temp = temp->next;
ptr->next = prev;

prev = ptr;

}

return ptr;

}


int main(){

node * head = new node;
head->data = 1;
node * second = new node;
head->next = second;
second->data = 2;
second->next = nullptr;

node * ptr ;
ptr = rev(head);

while(ptr!=nullptr){
cout<<ptr->data;
ptr = ptr->next;
}

}