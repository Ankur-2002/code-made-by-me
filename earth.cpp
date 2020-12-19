#include<iostream>
using namespace std;

int main(){
int brick;
cin>>brick;

for(int i=1; ;i++){

brick-=i;
if(brick <=0){
cout<<"patlu";
break;
}



brick-=2*i;
if(brick<=0){
cout<<"motu";
break;
}


}


	return 0;
	}