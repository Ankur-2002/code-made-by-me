#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int arr[n];
  int dp[n + 1][n + 1];

  for (int i = 0; i < n; i++)
    cin >> arr[i];

  for (int gap = 0; gap < n-1; gap++)
  {
        for(int i=0,j=gap; j < n-1; j++,i++)
        {
            if(gap==0)
            dp[i][j] = 0;
            
            else if (gap==1)
            dp[i][j] = arr[i]*arr[j]*arr[j+1];
            
            else 
            {
                int mini = INT_MAX;
                for(int k=j-1,l=j; k>=i && l>i; k--,l--)
                {
                    mini = min((dp[i][k]+dp[l][j]+(arr[i]*arr[k+1]+=*arr[j+1])) , mini);
             
                }
                dp[i][j] = mini;
            }
            
        }
        
  }


  cout << dp[0][n-2];
  return 0;
  }