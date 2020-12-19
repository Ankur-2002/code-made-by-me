#include<bits/stdc++.h>
using namespace std;

bool check(vector<vector<int>>arr, int k)
{

int left = 0;
int right = arr[0].size()-1;

while(true)
{
if(left > right)
return false;

else if(arr[left][right]==k)
return true;

else if(arr[left][right] < k)
left++;

else if(arr[left][right] > k)
right--;

}


}



int main()
{

vector<vector<int>>arr= {{1,3,5,7},{10,11,16,20},{23,30,34,60}};

bool x = check(arr , 11);
cout<<x;

}