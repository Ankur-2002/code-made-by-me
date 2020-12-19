#include<bits/stdc++.h>
using namespace std;

int main(){
int n,x;
cin>>n;
vector<int>v;
for(int i=0; i<n; i++){
cin>>x;
v.push_back(x);
}
vector<int>ans;
int count = 0;
//sort(v.begin(), v.end());
map<int,int>m;

for(auto i : v){
m[i]++;
}

for(auto i :m){
if(i.second >(n/3)){
ans.push_back(i.first);
count++;
}
}

if(count==0){
for(int i=0; i<v.size(); i++)
cout<<v[i]<<" ";
}

else{
for(int i=0; i<ans.size(); i++)
cout<<ans[i]<<" ";
}

}
