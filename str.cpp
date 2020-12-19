#include<bits/stdc++.h>
using namespace std;
int step(int k)
{
	if(k==1)
		return 1;
	else if(k==2)
		return 2;
	else
		return step(k-1)+step(k-2);
}
int main()
{
	/*
	string s="fafaffapassa";
	map<char,int> m;
	for(auto i:s)
		m[i]++;
	for(auto i:m)
		if(i.second==1)
			cout<<i.first;
	*/
	int k=5;
	cout<<step(5);
	return 0;
}