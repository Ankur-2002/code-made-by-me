#include<bits/stdc++.h>

using namespace std;

vector<vector<string>>answer;

bool queensafe(vector<string>chess,int j,int i, int n){

	for(int row=0; row<i; row++)
		if(chess[row][j]=='Q')
			return false;
	int x=i,y=j;
	
		while(x>=0 && y>=0)
		{
		if(chess[x][y]=='Q')
		return false;
		
		x--;
		y--;
		}
	x=i,y=j;
		
		while(x>=0 && y<n)
		{
			if(chess[x][y]=='Q')
			return false;
		
			x--;
			y++;
		}
	
		return true;
}

void solve(vector<string>chess, int j, int i, int n){

	if(i==n)
	{
	answer.push_back(chess);
	return ;
	}

	for(int j=0; j<n; j++)
	{
		if(queensafe(chess,j,i,n))
		{
			chess[i][j]='Q';

			solve(chess,j,i+1,n);

			chess[i][j]='.';	
		}	
	}
	
}








int main(){
int n;
cin>>n;
string a;
for(int i=0; i<n; i++)
a+='.';

vector<string>chess(n,a);

solve(chess,0,0,n);

if(answer.size()>0)
for(int i=0; i<n; i++)
{
	for(int j=0; j<n; j++)
	cout<<::answer[i][j]<<" ";
cout<<"\n";
}


}