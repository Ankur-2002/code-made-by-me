#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     
	int n , q , t, index , value;
	char ch;
	cin >> n >> q;
	vector<vector<int>>graph(n);
	
	for(int i=0; i<n; i++)
	{
		cin >> t;
		graph[t].push_back(i);
	}
	int move = 0;
	 
	while(q--)
	{
		cin >> index >> value >> ch;
		if(graph[value].size()==0)
		{
			cout << "-1\n";
			continue;	
		}	
		
		 int maxi = INT_MAX,mini = INT_MAX;
		if(ch == 'L')
		{
			for(auto i : graph[value])
			{	
				if(i < index)
				{
					maxi = min( index - i,maxi);
				}
				else
					mini = min(index+n-i,mini);
			}
			if(maxi != INT_MAX)
			cout << maxi << "\n";
			else 
			cout << mini<< "\n";
		}

		else 
		{
			
			for(auto i : graph[value])
			{
				if(index < i)
				maxi = min(i-index+1,maxi);
				else 
				mini = min(n-index+i+1,mini);
			}
			if(maxi != INT_MAX)
			cout << maxi << "\n";
			else 
			cout << mini<< "\n";

		}
	
	}

}