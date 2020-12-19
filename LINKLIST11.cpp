#include<bits/stdc++.h>

using namespace std;

struct node{
int data;
node * next;
};

void add(node ** head, int data){
node * ptr = *head;
node * temp = new node;
temp->data = data;
temp->next = nullptr;

while(ptr->next!=nullptr){
ptr = ptr->next;
}

ptr->next = temp;

ptr = *head;
}


void prints(node * head){
while(head!=nullptr){
cout<<head->data<<" ";
head = head->next;
}
}



int main(){
node * head = new node;
vector<int>v;
int n;
cin>>n;
for(int i=0; i<n; i++){
int x;
cin>>x;
v.push_back(x);
}

head->data = v[0];
head->next = nullptr;

for(int i=1; i<v.size(); i++){
add(&head , v[i]);
}

prints(head);
}