#include<bits/stdc++.h>

using namespace std;

int main(){
int n;
cin>>n;

vector<vector<int>>pascal;

vector<int>x;

x.push_back(1);

pascal.push_back(x);

x.push_back(1);

pascal.push_back(x);


for(int i=2; i<=n ; i++){
vector<int>num(i+1,1);
for(int j=1; j<i; j++){
num[j] = pascal[i-1][j-1] + pascal[i-1][j];
}
pascal.push_back(num);
}

for(int i=0; i<pascal[n].size(); i++)
cout<<pascal[n][i]<<" ";


return 0;
}