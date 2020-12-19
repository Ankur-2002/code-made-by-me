#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,double>a, pair<int,double>b)
{
	return (a.second > b.second);	
}


int main()
{

int weight[5]={2,3,4,5,6};
int price[5]={12,10,14,13,15};
		
int W_capacity_of_knapsack=5;

vector<pair<int,double>>arr;

for(int i=0; i<5; i++)
{
pair<int,double>p;
p.first = weight[i];
p.second=(double)price[i]/weight[i];

arr.push_back(p);
}
sort(arr.begin(), arr.end(),cmp);

/*
	for(auto i : arr)
	cout<<i.first<<" "<<i.second<<"\n";

*/
double total=0;

	for(int i=0; i<arr.size(); i++)
	{
	if(W_capacity_of_knapsack-arr[i].first > 0)
	{
	total+=(arr[i].first*arr[i].second);
	W_capacity_of_knapsack-=arr[i].first;	
	}
	
	else
	{
	total+=((double)arr[i].second*(W_capacity_of_knapsack));
	break;
	}
	
	}

cout<<total<<" ";


return 0;
}