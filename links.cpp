#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
node * next;
};


void at_end(node * ptr , int data){

node * temp = new node;
temp->data = data;

while(ptr->next!=nullptr){
ptr = ptr->next;
}

ptr->next = temp;
temp->next = nullptr;

}


void print(node * ptr){

while(ptr!=NULL){
cout<<ptr->data;
ptr = ptr->next;
}

}


int main(){

node * head = new node;
head->next = nullptr;
for(int i=2; i<5; i++){

	at_end(head , i);
}
print(head);
return 0;
}