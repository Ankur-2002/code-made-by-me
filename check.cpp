#include<iostream>
#include<cstring>
using namespace std;

void chr(char b[], char c){	
	char *d=b;
	for(int i=0 ;i<strlen(b); i++){
	if(*d==c){
	cout<<d;
	}
	d++;
	}

	}
int main(){
	char a[20], c;	
	gets(a);
	cin>>c;
	chr(a,c);
	
	return 0;
}