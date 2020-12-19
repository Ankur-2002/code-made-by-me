#include<bits/stdc++.h>
using namespace std;

int main(){

string s;
cin>>s;
int sum=0,count=0,l=0;
for(int i=0; i<s.length(); i++){
	if(s[i]=='0'){
	sum++;
	if(sum==5){
		l++;
	cout<<"Sorry, sorry!";
	break;
	}
	}
	
	else {
	sum=0;
	}

}

if(l==0){

for(int i=0; i<s.length(); i++){
	if(s[i]=='1'){
	count++;
	if(count==5){
		l++;
	cout<<"Sorry, sorry!";
	break;
	}
	}
	
	else {
	sum=0;
	}

}

}

else if(l==0)
	cout<<"Good luck!";


}
