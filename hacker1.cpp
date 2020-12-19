#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	
	int sum=0,x;
	vector<int>v;
	vector<int>final;
	for(int i=0; i<5; i++){
	cin>>x;
	v.push_back(x);
	}
	
	sort(v.begin() , v.end());
	
	for(int i=0; i<5; i++){
	sum+=v[i];
	}
	final.assign(5,sum);
	//cout<<sum;
		
	for(int i=0; i<5; i++){
	final[i] = final[i]-v[i];
	//cout<<final[i]<<" ";
	}	
	
	sort(final.begin() , final.end());
	cout<<final.front()<<" "<<final.back();		

}