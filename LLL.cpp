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

void add(node * head,int data){

node * temp = new node(data);

while(head->next!=nullptr){
head = head->next;
}
head->next = temp;
}

void print(node * head){
while(head!=nullptr){
cout<<head->data;
head = head->next;
}
}

node * reverse(node * head){
node * prev = head;
node * temp = head->next;

prev->next = nullptr;

	while(temp!=nullptr){
	head = temp;
	temp = temp->next;
	head->next = prev;
	prev = head;
	}
return prev;
//return;
}



int main(){
node * head = new node(1);
add(head,2);
add(head,2);
add(head,2);
add(head,2);
add(head,2);
head = reverse(head);

print(head);

}