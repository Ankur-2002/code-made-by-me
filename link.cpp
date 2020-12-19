#include<bits/stdc++.h>

using namespace std;

struct node{
int data;
node * next;
};

node * add_at_beging(node * ptr , int data){

node * temp = new node;
temp->data = data;
temp->next = ptr;

ptr  = temp;

return ptr;
}


int main(){
int n;
cin>>n;
node * head = new node;
head->next = nullptr;
int x;


node * ptr = head;

	for(int i=0; i<n; i++)
	{
		cin>>x;
		if(i==0)
		head->data = x;
		
		else
		ptr = add_at_beging(ptr , x);
	
	}
	//ptr = head;
	
	while(ptr!=nullptr){
	cout<<ptr->data;
	ptr = ptr->next;
	}

}

