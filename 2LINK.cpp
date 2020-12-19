#include<bits/stdc++.h>
using namespace std;


struct node{
int data;
node * next;
node(int d){
data = d;
next = NULL;
}
};

void add(node * ptr,int data){

node * temp = new node(data);
while(ptr->next!=nullptr){
ptr = ptr->next;
}

ptr->next = temp;
}

void print(node * ptr){
while(ptr!=nullptr){
cout<<ptr->data<<" ";
ptr = ptr->next;
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
return head;
}

node * merge(node * head1, node * head2){
stack<int>s;
while(head2!=nullptr){
s.push(head2->data);
head2 = head2->next;
}

node * prev = head1;
node * temp = head1->next;

while(temp!=nullptr){
node * check = new node(s.top());
s.pop();
prev->next = check;
check->next = temp;

prev = temp;
temp = temp ->next;

}

node * check = new node(s.top());
s.pop();
prev->next = check;

return head1;

}



int main(){
node * head = new node(1);
add(head , 5);
add(head , 10);
add(head , 15);
add(head , 20);
//print(head);
cout<<"\n";
node * head2 = new node(5);
add(head2 , 11);
add(head2 , 12);
add(head2 , 13);
add(head2 , 14);
//print(head2);

head = merge(head, head2);
print(head);

	return 0;
}