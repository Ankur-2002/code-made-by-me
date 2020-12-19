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

for(int i=2; i<n; i++){
vector<int>ans(i+1,1);
for(int j=1; j<i; j++){
ans[j] = pascal[i-1][j-1]+pascal[i-1][j];
}
pascal.push_back(ans);
}



for(int i=0; i<pascal.size(); i++){

for(int j=0; j<pascal[i].size(); j++){
cout<<pascal[i][j]<<" ";
}
cout<<"\n";
}

}