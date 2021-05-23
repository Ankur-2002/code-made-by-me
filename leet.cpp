#include<bits/stdc++.h>
using namespace std;
    int solve(int i,int j,int amount,vector<int>&coins,vector<int>&dp)
    {
     
        if(amount == 0)
        {
        return 0;
        }
        if(amount < 0)
            return 0;
        
        if(dp[amount]!=INT_MAX-2)
            return dp[amount];
        
        for(int k = i; k < j; k++)
        {
            if(coins[k] <= amount)
            dp[amount] = min(1+solve(k,j,amount-coins[k],coins,dp),dp[amount]);
             
        }
        
       return dp[amount]; 
    }
    int coinChange(vector<int>& coins, int amount) {
       vector<int>dp(amount+1,INT_MAX-2);  
       int x = solve(0,coins.size(),amount,coins,dp);
        if(x == INT_MAX-2)
            return -1;
        return x;
    }

    
int main(){
vector<int>arr = {411,412,413,414,415,416,417,418,419,420,421,422};
coinChange(arr,9864);

}   