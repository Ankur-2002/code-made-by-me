#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s="Ya";
	for(int i=0;i<s.length();i++)
	{
		if((int)s[i]<96)
		{
			s[i]=(65+((s[i]-'A')+4)%26);
		}
		else
			s[i]=(97+((s[i]-'a')+4)%26);		
	}
	cout<<s;
	return 0;
}