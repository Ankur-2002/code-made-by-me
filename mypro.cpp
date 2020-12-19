#include<bits/stdc++.h>
using namespace std;

int count(vector<int>&nums, int k)
{

map<int,int>MAP;
int count=0 ,sum=0;

for(int i=0 ; i<nums.size(); i++){

sum+=nums[i];
if(sum==k)
count++;

if(MAP[sum-k]!=0)
count+=MAP[sum-k];

else
MAP[sum-k]++;

}






}




int main(){

int

}