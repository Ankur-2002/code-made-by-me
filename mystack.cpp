#include<bits/stdc++.h>

using namespace std;
#define max 10
int arr[max];
int top = -1;

void push(int data){
if(top==max-1)
return ;

::arr[++top] = data;
}

void pop(){

if(top==-1)
return ;

top--;
}

void peek(){

if(top==-1)
return ;

cout<<::arr[top];
}

bool empty(){

if(top==-1)
return true ;

return false;
}


int main(){

char c='y';
push(1);
push(2);
push(3);
push(4);
push(5);
push(6);

if(empty()){
cout<<"yes";
}

pop();

pop();
pop();
pop();
pop();

pop();
peek();
if(empty())
cout<<"stack is empty";

	return 0;
}