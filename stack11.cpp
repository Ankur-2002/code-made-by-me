#include<bits/stdc++.h>
using namespace std;

int main(){

int arr[]={6,2,5,4,5,1,6};

vector<int>high(7,7);

stack<int>t;
t.push(0);
for(int i=1; i<7; i++)
{

if(arr[t.top()] < arr[i])
t.push(i);

else
{
	while(!t.empty() && arr[t.top()] >= arr[i])
	{
		high[t.top()] = i;
		t.pop();
	}
	t.push(i);

}

}

for(auto i : high)
cout << i <<" ";

vector<int>low(7,-1);
stack<int>v;
v.push(6);
for(int j=5; j>=0; j--)
{
	if(arr[v.top()] < arr[j])
	v.push(j);

	else{
		
		while(!v.empty() && arr[v.top()] > arr[j])
		{
			low[v.top()] = j;
			v.pop();
		}	
		v.push(j);
	}

}


cout<<"\n";
for(auto i : low)
cout << i << " ";

return 0;
}