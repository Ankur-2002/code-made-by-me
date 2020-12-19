#include<bits/stdc++.h>

using namespace std;

int main(){
int n;
cin>>n;
vactor<vector<int>>pascal;

vector<int>x;

x.push_back(1);

pascal.push_back(x);

x.push_back(1);

pascal.push_back(x);

vector<int >ans;
for(int i=0; i<pascal[n].size(); i++){
ans.push_back(pascal[n][i]);
}

for(int i=0; i<ans.size(); i++)
cout<<ans[i]<<" ";

return 0;
}