#include<bits/stdc++.h>

using namespace std;
int arr[5][5] = {{1,2,3,4,5},{1,2,4,5,6},{2,4,5,6,76},{2,42,4,2,5},{3,5,63,3,4}};
int dp[5][5] = {};
int n = 5;
int solve(int i , int j)
{
if(i >= n || j >= n)
return INT_MAX;

if(dp[i][j] !=-1)
return dp[i][j];

if(i==n-1 && j==n-1)
return arr[i][j];


return dp[i][j] =  (arr[i][j] + min(solve(i+1,j) , solve(i,j+1)));
}

int main (){
memset(dp,-1,sizeof(dp));
cout << solve(0,0);
}
