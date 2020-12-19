#include<bits/stdc++.h>

using namespace std;

struct node{
int data;
node * next;
};

node * rear = NULL;
//node * front = NULL;

void push(int data){



node * temp = new node;
temp->data = data;
temp->next = rear;
rear = temp;

}

void pop(){

if(rear==NULL)
return ;

else{
node * front = rear;

while(front->next->next!=nullptr){
front = front->next;
}

front->next = nullptr; 
}
}


void print(){
while(rear!=nullptr){
cout<<rear->data;
rear=rear->next;
}

}

int main(){
push(1);
push(2);
push(3);
pop();
pop();
//pop();

print();

return 0;
}