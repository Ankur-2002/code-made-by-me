#include<bits/stdc++.h>
using namespace std;
bool solve(string s);
bool AND(string s , int &i);
bool OR(string s , int &i);
bool NOT(string s, int &i);
int main(){

string s;
cin >> s;
cout << solve(s);
return 0;
}

bool solve(string s)
{
	int i=1;
	if(s[0]=='!')
	return NOT(s,i);
	else if(s[0] == '|')
	return OR(s,i);
	else 
	return AND(s,i);	
}

bool NOT(string s, int &i)
{
bool ans;
	for(i;s[i]!=')';i++)
	{
	if(s[i]=='t')
	ans  = true;
	else if(s[i]=='f')
	ans = false;
	else if(s[i]=='!')
	ans = (NOT(s,++i));
	else if(s[i] == '|')
	ans = (OR(s,++i));
	else if(s[i]=='&')
	ans = (AND(s,++i));	
	}
return !ans;
}
bool AND(string s, int &i)
{
	bool ans = true;
	for(i; s[i]!=')';i++)
	{
	if(s[i]=='f'){
	for(i;s[i]!=')';i++);
	return false;
	}
	else if(s[i]=='!')
	ans = ans && (NOT(s,++i));
	else if(s[i] == '|')
	ans = ans && (OR(s,++i));
	else if(s[i]=='&')
	ans = ans && (AND(s,++i));
	}
return ans;
}

bool OR(string s , int &i)
{
	bool ans = false;
	for(i; s[i]!=')';i++)
	{
	if(s[i]=='t'){
	for(i;s[i]!=')';i++);
	return true;
	}
	else if(s[i]=='!')
	ans = ans ||(NOT(s,++i));
	else if(s[i] == '|')
	ans = ans || (OR(s,++i));
	else if(s[i]=='&')
	ans = ans || (AND(s,++i));
	}
return ans;	
}
