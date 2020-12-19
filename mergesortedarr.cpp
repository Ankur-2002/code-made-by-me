#include<bits/stdc++.h>
using namespace std;
/*
void merge(vector<int> &a,vector<int> &b)
{
	int i=0;
	while(i<a.size())
	{
		if(a[i]>b[0])
		{
			int first=a[i];
			swap(a[i],b[0]);
			int j=1;
			while(j<b.size() && b[j]<first)
			{
				b[j-1]=b[j];
				j++;
			}
			b[j-1]=first;
		}
		i++;
	}
}*/
int nextgap(int gap)
{
	if(gap<=1)
		return 0;
	return	(gap/2)+(gap%2);	
}
void merge(vector<int> &a,vector<int> &b)
{	
	int i=0,j=0;
	int gap=nextgap(a.size()+b.size());
	while(gap>0)
	{
		for( i=0;i+gap<a.size();i++)
			if(a[i]>a[i+gap])
				swap(a[i],a[i+gap]);
		for( j = gap>a.size() ? gap-a.size() : 0; i<a.size(),j<b.size();i++,j++ )
			if(a[i]>b[j])
				swap(a[i],b[j]);
		if(j<b.size())
		{
			for(j=0;j+gap<b.size();j++)
				if(b[j]>b[j+gap])
					swap(b[j],b[j+gap]);
		}
		cout<<"\n";
		for(auto it:a)
			cout<<it<<" ";
		for(auto it:b)
			cout<<it<<" ";
		gap=nextgap(gap);
	}
}

int main()
{
	vector<int> a = {3,4,5,7,10};
	vector<int> b = {1,2,6,8,9};
	merge(a,b);
	
	return 0;
}