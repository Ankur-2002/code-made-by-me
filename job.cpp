#include<bits/stdc++.h>
using namespace std;



class data{
public :

int profit;
int time;
char s;

};

bool compare(data a , data b){
return a.profit > b.profit;
}

int main(){

vector<data>arr;
int m=0;
for(int i=0; i<2; i++)
{
data d;
cin>>d.profit>>d.time>>d.s;
m = max(m , d.time);
arr.push_back(d);
}

sort(arr.begin(), arr.end(),compare);

vector<int>total(m+1 , 0);

for(int i=0; i<n; i++){
if(total[arr[i].time]==0)
total[arr[i].time] = arr[i].profit;

else
{

for(int j=arr[i].time-1; j>0; j--)
{
if(total[j]==0)
total[j] = arr[i].profit;
}

}

}

	


}


	return 0;
}