#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       sort(intervals.begin(),intervals.end());
        vector<int> v(2);
	vector<vector<int>> ans;
        v=intervals[0];
        for(int i=1;i<intervals.size();i++)
	{
		if(v[1]>intervals[i][0])
			v[1]=max(v[1],intervals[i][1]);
		else
		{
			ans.push_back(v);
			v=intervals[i];
		}		
	}
	ans.push_back(v);
        return ans;
    }
};
int main()
{
	Solution s;
	vector<vector<int>> intervals={{1,3},{2,6},{8,10},{9,18}};
	vector<vector<int>> ans;
	ans=s.merge(intervals);
	for(auto it:ans)
	{	
		for(auto i:it)
			cout<<i<<" ";
		cout<<"\n";
	}
	return 0;
}