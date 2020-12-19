#include<bits/stdc++.h>
using namespace std;


struct node {
int data;
node * next;

node(int d){
data= d;
next = nullptr;
}

};

node * head = nullptr;

void push(int data){
node * temp = new node(1);

if(head==nullptr){
head = temp;
return ;
}

temp->next = head;
head = temp;
}


void pop(){

if(head==nullptr)
return ;

head = head->next;

}

void top(){
if(head==nullptr)
return ;

cout<<head->data;
}

void print(){
while(head!=nullptr){
cout<<head->data;
head= head->next;
}
}


int main(){
push(1);
push(2);
push(3);
push(4);

//pop();
top();
print();
}