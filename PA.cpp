#include<bits/stdc++.h>
using namespace std;

	bool solve(string s, int f, int last){
	int temp;	
	
	if((last-f)%2==0)
	temp = ((last-f)/2)-1;

	if((last-f)%2==1)
	temp = (last-f)/2;

	for(int i=0; i<=temp; i++){
	
	if(s[i+f]!=s[last-i])
	return false;
	
	if(i==temp)
	return true;
	
	}		
	
	return false;
	}

int main(){

string s;
int n;
cin>>s>>n;

	while(n--){	
	int x;
	cin>>x;
	for(int i=0; i<s.length(); i++){
	bool t;
	t = solve(s,i,x+i);
	if(t==true){
	cout<<t;
	break;	
	}
	cout<<t;
	}
		
	}

	return 0;
}