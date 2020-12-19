#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v={-2,-3,4,-1,-2,1,5,-3};
	int m=0;
	int maxsum=INT_MIN;
	for(int i=0;i<v.size();i++)
	{
		m+=v[i];
		maxsum=max(maxsum,m);
		m=max(m,0);
	}
	cout<<maxsum;
	return 0;
}