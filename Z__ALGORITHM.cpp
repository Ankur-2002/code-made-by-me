#include<bits/stdc++.h>
using namespace std;

void Z_algo(string pattern, string mainstring,vector<int>&Zarray)
{
	mainstring  = pattern + '$' + mainstring;
	int l = 0, r = 0;
	Zarray[0] = 0;
	for(int i=1; i<mainstring.length(); i++)
	{
		if(i > r)
		{
			l = i , r = i;
			while(r < mainstring.length() && mainstring[r-l]==mainstring[r])
					r++;	
			Zarray[i] = r-l;				
		r--;
		}
		
		else
		{
			Zarray[i] = Zarray[r-l];
			
		}
	
	}

return ;
}


int main(){
string s,te;
s = "GEEKSFORGEEKSGEEKS";
te = "GEEKS";
int n = s.length()+te.length()+1;
vector<int>Zarray(n,-1);
Z_algo(te,s,Zarray);

for(auto i : Zarray)
cout << i <<" ";

return 0;
}