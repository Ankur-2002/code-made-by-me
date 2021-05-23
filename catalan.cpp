#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	int dp[n+1];
	dp[0] = 1;
	dp[1] = 1;
	
	for(int i=2; i<=n; i++)
	{
			long long total = 0;
			int j = 0 , k = i-1;
			while(j < k)
			{
				total +=((dp[j]*dp[k])*2);	
				j++;
				k--;
			}
		if(i%2==0)
		{	
			dp[i] = total;
		}
		else
		dp[i] = (total + dp[i/2]*dp[i/2]);
		 
	}
	
	for(auto i : dp)
	cout << i << " ";
	
	cout << " \n" << dp[n];
return 0;
}