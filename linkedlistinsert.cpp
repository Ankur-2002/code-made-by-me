#include<iostream>
using namespace std;

struct node{
int data;
node * next;
};


node * add_at_end(node *ptr, int data){

node *temp = new node;
temp->data = data;
temp->next = nullptr;

ptr->next = temp;

return temp;
}





int main(){

int n,x;
cin>>n;
node * head = new node;
head->next=nullptr;

node *ptr = head;

for(int i=0; i<n; i++){
cin>>x;

if(i==0)
head->data = x;

else{

ptr = add_at_end( ptr , x);

}

}

ptr = head;
 
while(ptr!=nullptr){
cout<<ptr->data<<" ";
ptr = ptr->next;
}

}