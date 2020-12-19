#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v={1,3,4,2,2};
	/*
	map<int,int> m;
	for(int i=0;i<v.size();i++)
	{
		if(m[v[i]]==0)
			m[v[i]]++;
		else
			cout<<v[i];
	}
*/
	int s=v[0];
	/*
	while(true)
	{
		if(v[s]<0)
		{
			cout<< s;
			break;
		}
		else
		{
			v[s]*=-1;
			s=abs(v[s]);
		}
	}*/
	int q=7;
	while(--q)
	{
		cout<<q;
	}
	return 0;
}