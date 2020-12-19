#include<bits/stdc++.h>

using namespace std;

int main(){

int n;
cin>>n;

map<int,int>m;

int i=0;

vector<int>v;

for(int k=0; k<n; k++){

int x;
cin>>x;
v.push_back(x);
i++;

if(m[x]==0)
m[x] = i;
}

/*
for(auto i : m){
cout<<i.second<<" "<<i.first;
cout<<"\n";
}
*/
int q;
cin>>q;

	for(int i=0; i<q; i++){
	int j;
	cin>>j;
	
	if(m[j] > 0)
	cout<<"YES "<<m[j]<<"\n";	

	else {
	for(int l = m[j]; l<v.size(); l++){
	if(j < v[l]){
	cout<<"NO "<<l+1<<"\n";
	}
	}
}	

	
	}


	return 0;
}