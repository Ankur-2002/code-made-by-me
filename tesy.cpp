#include<bits/stdc++.h>

using namespace std;

int main(){
int n,x;
cin>>n;
vector<int>v;

for(int i=0; i<n ; i++){
cin>>x; 
v.push_back(x);
}
int sum=0,max=0;
for(int i=0; i<n; i++){

if(abs(v[i]-v[i+1])==1 || abs(v[i]-v[i+1])==0)
sum++;

else{ 
if(max<sum)
max=sum;
}
sum=0;
}

cout<<max;
}