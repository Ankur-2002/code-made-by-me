#include<bits/stdc++.h>

using namespace std;

struct node{
int data;
node * next;
};

node * head=NULL;

void push(int data){
node * temp = new node;
temp->data = data;
temp->next=head;
head = temp;
}

void print(){
while(head!=nullptr){
cout<<head->data<<"\n";
head = head->next;
}
}

int main(){
push(0);
push(0);
push(0);
push(0);
push(0);
push(0);

print();
}