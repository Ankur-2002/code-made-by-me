#include<bits/stdc++.h>

using namespace std;

 

int main(){
    
    int n,cap;
    cin >>n;

    vector<pair<int,int>>arr(n);
    
    for(int i=0; i<n; i++)
    cin >> arr[i].second;
    
    for(int i=0; i<n; i++)
    cin >> arr[i].first; 
    cin >>cap;
    
    int dp[n+1][cap+1];
    for(int i=0; i<=cap; i++)
    {
        dp[0][i] = 0;
        if(i < n)
        dp[i][0] = 0;
    }
    
    for(int row = 1; row<=n; row++)
    {
        for(int j=1; j<=cap; j++)
        {
            if(j >= arr[row-1].first)
            {
                dp[row][j] = max(dp[row-1][j] , arr[row-1].second+dp[row-1][j-arr[row-1].first]);
            }
            else 
            dp[row][j] = dp[row-1][j];
        }
    
    }

    cout << dp[n][cap]<<"\n";
    
    
    queue<pair<string,pair<int,pair<int,int>>> >temp;
    temp.push({"",{0,{n,cap}}});
  
    while(!temp.empty())
    {
        pair<string,pair<int,pair<int,int>>>curr = temp.front(); 
        temp.pop();
        string path = curr.first;
        int capacity = curr.second.first;
        int x = curr.second.second.first;
        int y = curr.second.second.second;
    
        if(capacity == dp[n][cap])
        {
            cout << path << "\n";
            continue;
        } 
	if(x <=0)
	continue;

        if(y-arr[x-1].first >= 0)
        {

cout << capacity <<"\n";
            string p = to_string(x-1)+" "+path;
            temp.push({p,{capacity+arr[x-1].second,{x-1,y-arr[x-1].first}}});
        }
        if(dp[x-1][y]!=0)
        {


cout << capacity <<"\n";
            temp.push({path,{capacity,{x-1,y}}});
        }
        
    }
    
    
    
    return 0;
}