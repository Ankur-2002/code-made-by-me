#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;
	
	vector<int>v;
	for(int i=0; i<n; i++){
	int x;
	cin>>x;
	v.push_back(x);
	}
	reverse(v.begin(), v.end());
	
	int q;
	cin>>q;
	vector<vector<int>>ans;
	
	for(int i=0; i<q; i++){
	vector<int>ans1(2);
	cin>>ans1[0]>>ans1[1];
	
	ans.push_back(ans1);
	ans1.clear();
	}
	
	sort(ans.begin(), ans.end());
	
	vector<vector<int>>ankur;
	vector<int>temp(2);
	temp = ans[0];
	for(int i=1; i<ans.size(); i++){
	
	if(temp[0]!=ans[i][0] || temp[1]!=ans[i][1]){
	ankur.push_back(temp);
	temp = ans[i];	
	}

	}
	ankur.push_back(temp);		
	for(int i=0; i<ankur.size(); i++){
	
	for(int j=ankur[i][0]-1; j<=ankur[i][1]-1; j++){
	if(v[j]==1)
	v[j]=0;
		
	else
	v[j]=1;
	}
	
	}	

	for(auto i : v)
	cout<<i;
	
}