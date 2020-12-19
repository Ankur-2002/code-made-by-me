#include<bits/stdc++.h>
using namespace std;



struct node {
int data;
node * next;
};

node * head = nullptr;

void push(int data){
node * temp = new node;
temp->data = data;
temp->next = head;
head = temp;
}


void pop(){
if(head==nullptr){
cout<<"error : stack underflow\n";
return ;
}

head = head->next;
}

void print(){
while(head!=nullptr){
cout<<head->data<<" ";
head = head->next;
}
}

int main(){
pop();

push(1);

push(2);

push(3);
//pop();

print();
}