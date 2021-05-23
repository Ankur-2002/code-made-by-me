#include<bits/stdc++.h>
using namespace std;

string a , b;
bool solve(int ,int);

int main()
{	
	string aa,bb;
	cin >> aa >> bb;
	a = bb , b = aa;	
	cout << solve(0,0);	
	return 0;
}

bool solve(int i,int j)
{ 
	if(i == a.size() && j ==b.size())
		return true;
	if(i >= a.size() || j >= b.size() )
	return false;
	
		

	if(a[i] == '?' || a[i]==b[j])
		return solve(i+1,j+1);
	
	if(a[i] == '*')
	{
		
		for(int k=j; k<b.size(); k++)
		{
			
			if( solve(i+1,k) )
			return true;
		}	

	}
	
	if(a[i] != b[j])
		return false;
	return false;
}

