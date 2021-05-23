#include<bits/stdc++.h>
using namespace std;

int solve(string s){
	
	int count=0,j=0;
	bool x = false;
	for(int i=0; i<s.length(); i++)
	{
		if(s[i]=='('){
		x = true;
		for(j=i; j<s.length()+i; j++)
		{
cout << j <<" ";
			if(x==true && s[j%s.length()]=='(')
			{
				x = false;
			}

			else if(x==false && s[j%s.length()]==')')
			{	
				x=true;
			}
			else
			{
				break;
			}
		}
cout << "\n";
		if(j==(s.length()+i))
		count++;
		}
		
	}

	//cout << temp.size()+1;
	return count;
}



int main(){
string s;
cin>>s;

cout << solve(s);

return 0;
}