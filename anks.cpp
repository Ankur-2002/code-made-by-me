#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v={1,2,3,4,5,6,7,8,9,8};
/*	for(int i=0;i<v.size();i++)
	{
		if(v[abs(v[i]-1)]>0)
		{
			v[abs(v[i]-1)]*=-1;	
		}
		else
			cout<<abs(v[i]);
	}
	for(int i=0;i<v.size();i++)
	{
		if(v[i]>0)
			cout<<i+1;
	}

*/
int s=0;
int i=0;
while(true){

if(v[s] > 0)
v[s]*=-1;

else if(v[s] < 0){
s = abs(v[s]);
cout<<abs(v[s]);
break;
}

s = abs(v[s]);

if(i==v.size()-1)
break;
}


	return 0;
}
