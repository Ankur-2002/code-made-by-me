#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
node *next;

node(int Data){
data = Data;
next = NULL;
}
};


int main(){

int n,m;
cin>>n>>m;
vector<node*>arr(n+1); // we create a array of linked list //

for(int i=0; i<n+1; i++){
arr[i] = new node(i);
}

int vertex,end;
while(m--){
cin>>vertex>>end;

node * temp =  arr[vertex]->next;
arr[vertex]->next = new node(end);
arr[vertex]->next->next = temp;
temp = arr[end]->next;
arr[end]->next = new node(vertex);
arr[end]->next->next = temp;
}


for(int i=0; i<n+1; i++){
cout << i <<"           ";
while(arr[i]!=nullptr){
cout << arr[i]->data<<" ";
arr[i] = arr[i]->next;
}

cout << "\n";
}



  
return 0;
}