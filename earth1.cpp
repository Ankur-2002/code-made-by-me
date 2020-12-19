#include<bits/stdc++.h>

using namespace std;

int main(){

string s;
int n;

cin>>s>>n;

	for(int i=0; i<s.length(); i++)
	{
			if(isupper(s[i])){	
				s[i]+=n;
				if(s[i] > 'Z'){
				s[i] = 64+(s[i]-'Z');
				}
			
			}
		
			else if(islower(s[i])){
			s[i]+=n;
			if(s[i] > 'z'){
			s[i] = 96+('z'- s[i]);
					
				}			
			
			}

		else if(isdigit(s[i])){
		s[i]+=n;
		if(s[i]> '9'){
		s[i] = 47+((s[i]-'9'));
		}
			
		}
	}


cout<<s;
}