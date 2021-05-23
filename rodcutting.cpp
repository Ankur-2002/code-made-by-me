#include<bits/stdc++.h>

using  namespace std;

int main(){
    
    int n;
    cin >> n; 
    
    int arr[n+1];
    int dp[n+1];
    
    for(int i=1; i<n; i++)
    {
        cin >> arr[i];
    }
    
    dp[0] = 0;
    dp[1] = arr[1];
    int i=2;
    while(i <= n)
    {
        int m = i/2;
        int maxi = 0;
        for(int j=i-1; m> 0; j--)
        {
            maxi = max(dp[j]+dp[i-j],maxi);
            m--;
            
        }
        dp[i] = maxi;
        i++;
    }
    
    cout << dp[n];
    
    return 0;
}