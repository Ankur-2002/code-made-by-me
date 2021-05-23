#include<bits/stdc++.h>
using namespace std;

bool solve(int n, int i, int j)
{
return (i < n && j < n && i >=0 && j >=0);
}

int result=0;

void rat(int n, int i,int j,vector<vector<int>>arr, vector<vector<int>>visited)
{
if(arr[n-1][n-1]==1)
return ;

if(solve(n,i,j)==false)
return ;

if(i==n-1 && j==n-1)
{
if(arr[i][j]==0)
result++;
return ;
}

visited[i][j] = 1;

if(solve(n,i-1,j) && arr[i-1][j]==0 && visited[i-1][j]==0)
rat(n,i-1,j,arr,visited);

if(solve(n,i+1,j) && arr[i+1][j]==0 && visited[i+1][j]==0)
rat(n,i+1,j,arr,visited);

if(solve(n,i,j+1) && arr[i][j+1]==0 && visited[i][j+1]==0)
rat(n,i,j+1,arr,visited);

if(solve(n,i,j-1) && arr[i][j-1]==0 && visited[i][j-1]==0)
rat(n,i,j-1,arr,visited);


 
visited[i][j] = 0;
}

int main(){
int n;
cin>>n;

vector<vector<int>>arr(n, vector<int>(n,0));
vector<vector<int>>visited(n, vector<int>(n,0));

for(int i=0; i<n; i++)
for(int j=0; j<n; j++)
cin>>arr[i][j];

rat(n,0,0,arr, visited);

cout<<result;
return 0;
}

