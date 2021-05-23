#include<bits/stdc++.h>
using namespace std;





int main()
{


int arr[] = {5,4,8,9,6,4,6,8,7,4,6,2,};
 
int Ma=INT_MIN,Mi=INT_MAX;

for(int i=0; i<12; i++)
{
	Ma = max(arr[i] , Ma);
	Mi = min(arr[i]  ,  Mi);
}
int fre[1+(Ma-Mi)]={0};
int out[12]={0};
	for(int i=0 ;i <12; i++)
	fre[arr[i]-Mi]++;
	
	for(int i=1; i<(Ma-Mi)+1; i++)
	fre[i] += fre[i-1];	
 
for(int i=11; i>=0; i--)
{
	out[fre[arr[i]-Mi]-1] = arr[i];
	fre[arr[i]-Mi]--;	 
}	
for(int i=0; i<12;i++)
	cout << out[i] <<"  ";	
	
return 0;
}