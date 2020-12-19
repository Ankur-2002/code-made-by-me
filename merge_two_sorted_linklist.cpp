#include<bits/stdc++.h>

using namespace std;

struct node{
int val;
node * next;

node(int s){
val = s;
next = nullptr;
}

};



node* merge_two_sorted_linklist(node *head1, node*head2){


if(head1==nullptr)
return head2;

if(head==nullptr)
return head1;

if(head1.val > head2.val){
node*temp =  head1;
head1 = head2;
head2=temp;
}

node *res = head1;

while(head1!=nullptr && head2!=nullptr){
node *temp = nullptr;

while(head1!=nullptr && head1.val<=head2.val)
{
temp = head;
head1 = head1->next;
}
temp->next = head2;

node *temporary = head1;
head1 = head2;
head2 = temporary;

}
return res;
}

  
 
 
 
 
 
int main()
{ 




}