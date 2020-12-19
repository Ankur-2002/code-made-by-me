#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
node * next;
};

node * head = nullptr;

void push(node ** head , int data){

node * temp = new node;

temp->data = data;

temp->next = *head;

*head = temp;

}

void print(node * head){
while(head!=nullptr){
cout<<head->data;
head = head->next;
}
}

void pop(){
if(head==nullptr)
return ;

head = (head)->next;

}


int main(){

push(&head, 1);
push(&head,2);

pop();
pop();
pop();

push(&head , 1);
push(&head , 10);
print(head);

}