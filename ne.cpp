#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
   int dp[n+1];
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    
    for(int i=3 ; i<=n; i++)
    {
        int end = i-1,front = 0;
        while(front < end)
        {
            dp[i]+=((dp[front]*dp[end])*2);
            front++;
            end--;
        }
        if(i%2)
        {
            dp[i]+=(dp[front]*dp[end]);
        }
    }
    
    cout << dp[n];
    return 0;
}