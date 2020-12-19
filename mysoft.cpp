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
int sum=0,max=0;
sort(v.begin(), v.end());
for(int i=0; i<n; i++){
    sum=0;
    for(int j=i+1; j<n; j++){
	if(abs(v[i]-v[j])==0 || abs(v[i]-v[j])==1){
	sum++;
	}
	else
	break;
	}
    if(max<sum)
    max=sum;
}
cout<<max+1;
}