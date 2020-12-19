#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
node * left;
node * right;

node(int d){
data = d;
left = nullptr;
right = nullptr;
}

};


void add(node * ptr , int data){
node * temp = new node(data);
while(ptr->right!=nullptr){
ptr = ptr->right;
}
ptr->right = temp;
}


void print(node * ptr){
while(ptr!=nullptr){
cout<<ptr->data;
ptr = ptr->right;
}

}

int main(){

node * head = new node(1);
add(head,2);
cout<<head->right->data;
add(head,3);
add(head,4);
add(head,5);
print(head);
}