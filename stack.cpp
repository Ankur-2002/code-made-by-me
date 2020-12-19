#include<bits/stdc++.h>
using namespace std;


int top=-1;
int array[10];

void push(int data){
if(top==10-1){
cout<<"error : stack overflow";
return ;
}

::array[++top] = data;
}


void pop(){

if(top==-1){
cout<<"error : stack underflow";
return ;
}
top--;
return ;
}

void peek(){
if(top==-1){
cout<<"error : no element in stack !!";
return ;
}

cout<<::array[top];
return ;
}

void empty(){
if(top==-1)
cout<<"yes , your stack is empty";

else 
cout<<"no , your stack is empty";

return ;

}

void print(){
for(int i=0; i<=top; i++)
cout<<::array[i]<<" ";
}

int main(){

//empty();
//pop();
push(1);
//pop();
push(2);
push(3);
push(4);
push(5);
push(6);
push(7);

pop();
pop();
pop();
pop();
pop();

pop();
pop();
peek();
//print();

return 0;
}