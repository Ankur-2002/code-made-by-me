#include<bits/stdc++.h>

using namespace std;

#define max 10

int array[max];
int front=-1,rear = -1;

void push(int data){
if(rear==9)
return ;

else if(front==-1 && rear==-1)
{front =0;
rear=0;
}
else 
rear++;

::array[rear]=data;
}


void pop(){

if(front==-1 && rear==-1)
return ;

if(front==rear)
{front=-1;
rear=-1;
}

else 
front++;

}

void peek(){
if(rear==-1)
return ;

else 
cout<<::array[rear];
}

void print(){
if(front==-1 && rear==-1)
return ;

for(int i=front; i<=rear; i++){
cout<<::array[i]<<"\n";
}
}

int main(){
push(1);

push(2);
peek();
pop();

print();

}