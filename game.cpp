#include<bits/stdc++.h>
using namespace std;
int main()
{

	int n,m,maximum = 0,maxi = 0;
	cin >> n >>m;
	int dp[n][m];
	int arr[n][m];

	for(int i=0; i<n; i++)
	for(int  j=0; j<m; j++)
	cin>>arr[i][j];
		
	for(int i=0; i<n; i++)
	dp[i][m-1] = arr[i][m-1];		

	for(int j=m-2;j>=0; j--)
	{
maxi = 0;
		for(int i=n-1; i>=0; i--)
		{

			int up=0,go=0,down=0;
			if(i-1 >= 0)
			{
				up = dp[i-1][j+1];
			}
			
			
			go = dp[i][j+1];
			
			if(i+1 <= n-1)
			down = dp[i+1][j+1];
			
			maxi = max(up,go);
			maxi = max(maxi,down);

			dp[i][j] = maxi+arr[i][j];
			
		}


	}

	for(int i=0; i<n; i++){
	for(int j=0; j<m; j++)
	cout << dp[i][j] << " ";
	cout << "\n";
	}
return 0;
}