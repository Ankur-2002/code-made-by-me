#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v={1,3,5,4,5,2};
	for(int i=0;i<v.size();i++)
	{
		if(v[abs(v[i])-1]>0)
		{
			v[abs(v[i])-1]*=-1;	
		}
		else
			cout<<abs(v[i])<<"\n";
	}
	for(int i=0;i<v.size();i++)
	{
		if(v[i]>0)
			cout<<i+1;
	}
	return 0;
}