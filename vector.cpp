#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
int n;
cin>>n;

vector<vector<int>>v(n);

	for(int i=0 ;i<n; i++){
	int size;
	cin>>size;

	
	for(int j=0 ; j<size*size; j++){
	int x;
	cin>>x;
	v[i].push_back(x);
	}
	sort(v[i].begin(),v[i].end());
	}

	
	 for(int i=0 ;i<n; i++){
	for(int j=0 ;j<v[i].size(); j++){
	cout<<v[i][j]<<" ";
		}
	cout<<"\n";

	}

}
/*
for(int i=0 ;i<n; i++){
for(int j=0 ;j<n; j++){
if(a[j]>a[j+1]){
int temp=a[j+1];

a[j+1]= a[j];

a[j]=temp;

}
}*/

}