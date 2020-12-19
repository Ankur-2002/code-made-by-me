#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>a , pair<int, int>b, int ab)
{

return (a.second < b.second );

}

int main()
{
int f[]={75250, 50074, 43659, 8931, 11273, 27545, 50879, 77924};
int s[]={112960, 114515, 81825, 93424, 54316, 35533, 73383, 160252};

vector<vector<pair<int, int>,int>arr;

for(int i=0; i<sizeof(f)/sizeof(int); i++)
{
pair<int,int>p;
p.first = f[i];
p.second = s[i];

arr.push_back(p,i+1);

}

sort(arr.begin(), arr.end(), cmp);

	/*int time=s[0];
	cout<<"1\n";
	for(int i=1; i<sizeof(f)/sizeof(int); i++)
	{	
		if(arr[i].first >= time)
		{
			cout<<i+1<<"\n";
			time = arr[i].second;
		}
			
		
	}*/
	
	for(auto i : arr)
	cout<<i.first<<" "<<i.second<<" "<<i[0]<<" \n";


	return 0;
}
