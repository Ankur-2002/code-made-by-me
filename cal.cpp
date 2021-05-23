#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>> n;
    
    int nums[n];
    
    for(int i=0; i<n; i++)
    cin>>nums[i];
    
    int tar;
    cin >>tar;
    
    bool dp[n+1][tar+1];
    memset(dp,0,sizeof(dp));
    for(int i=0; i <= n; i++)
    {
        dp[i][0] = true;
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j <= tar; j++)
        {
            if(j - nums[i-1] >= 0)
            {
                dp[i][j] = (dp[j-nums[i-1]][j] || dp[i-1][j]);
            }
            else 
            dp[i][j] = dp[i-1][j];
        }
    }
 
    if(dp[n][tar] == false)
    {
    cout << "false";
    return  0;
    }
    else 
    cout << "true\n";
 
    
    queue<pair<string,pair<int,int>>>temp;
    string b ="";
    temp.push({b,{n,tar}});
    
    while(!temp.empty())
    {
        pair<string,pair<int,int>>curr = temp.front();
        temp.pop();
        int i = curr.second.first;
        int j = curr.second.second;
        
        string path = curr.first;
    if(j==0)
	{ 
	    cout << path << " ";
	cout <<"\n";
	continue;
	}
	if(i==0)
	continue;
        if(j - nums[i-1] >= 0)
        {
            
           
            if(dp[i-1][j - nums[i-1]] == true)
            {
                 string a;
                if(path!="")
                a =  to_string(i-1)+" "+path;
                else
                a = to_string(i-1)+path;
                
                temp.push({a,{i-1,j-nums[i-1]}});
                
            }
            
        }
         if(dp[i-1][j] == true)
            {
                temp.push({path,{i-1,j}});
            }
        
    }

    return 0;
}


