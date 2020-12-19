#include<bits/stdc++.h>
using namespace std;

struct node{
int key;
int val;
node * next=nullptr;

node(int d,int k){
int val = k;
int key = d;
next = nullptr;
}

};


node * arr[10];

void insert(int key, int val, node *temp){

if(temp==nullptr){
temp = new node(key,val);
return ;
}

while(temp->next!=nullptr){
temp = temp->next;
}

temp->next = new node(key,val);

}

void print(node * temp){
while(temp!=nullptr){
cout<<temp->val;
temp = temp->next;
}
}


	int main()
	{
	int c,key,val;
	do{
	
	cout<<"1. insert\n2. print";
	cin>>c;
	
	if(c==1){
	insert(key,val,arr[key%10]);
	cin>>key>>val;		
	}	
	
	if(c==2)
	print(arr[key%10]);

	}while(c==1|| c==2);	
	 

	}