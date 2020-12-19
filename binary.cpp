#include<iostream>
using namespace std;

int main(){
int ar[13]={3,4,7,11,18,29,45,71,87,89,93,96,99};
//int len=10-1;
int s;
int first=0, last=12 ,mid;
cin>>s;

if(ar[last]>s)
{
while(first<=last){

mid=(first+last)/2;

if(ar[mid]==s){
cout<<mid+1;
break;
}

else if(ar[mid] < s){
first = mid +1;
}

else if(ar[mid] > s){
last = mid-1;
}
if(first == last)
break;

}
}
else {
cout<<"niklo : ";
}
return 0;
}