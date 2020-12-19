#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
node * next;


node(int d){
data = d;
next = nullptr;
}

};

node* reverse(node *head){

node * prev = head;
node * temp = prev->next;

prev->next = nullptr;

while(temp!=nullptr)
{
head = temp;
temp = temp->next;
head->next = prev;
prev=head;
}

return head;
}


void print(node *head){

while(head!=nullptr)
{
cout<<head->data<<" ";
head = head->next;
}

}




int main(){

node *head = new node(1);
head->next = new node(2);
head->next->next = new node(3);

head = reverse(head);

print(head);

}