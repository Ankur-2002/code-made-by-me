#include<bits/stdc++.h>
using namespace std;

queue<int>a;
queue<int>b;

void push(){
int num;
cin>>num;

::a.push(num);

while(!::b.empty()){
::a.push(b.front());
::b.pop();
}

queue<int>temp;
temp = ::a;
::a = ::b;
::b = temp;
}

void pop()
{
if(::b.empty()){
cout<<"NO elements in stack";
return ;
}
::b.pop();
}

void peek(){
if(::b.empty())
return ;

cout<<::b.front();
}
void leg(){
cout<<::b.size();
}

int main(){

char ch;

do{
int choice;
cin>>choice;
switch(choice)
{
case 1: push();	break;
case 2: pop();	break;
case 3: peek();	break;
case 4: leg();	break;
}
cout<<"\n do you want to do again press (\'y\')";
cin>>ch;

}while(ch=='Y' || ch=='y');

return 0;
}