// 4 sum question on leet code//

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>solve(int *arr, int target , int size){

vector<vector<int>>ans;

for(int i=0; i<size; i++){

for(int j=i+1; j<size; j++){

int front = j+1;
int back = size-1;
int remain = target - (arr[i]+arr[j]);

while(front < back){

if((arr[front]+arr[back]) > remain)
back--;

else if((arr[front]+arr[back]) < remain)
front++;

else{
vector<int>temp(4,0);
temp[0] = arr[i];
temp[1] = arr[j];
temp[2] = arr[front];
temp[3] = arr[back];
ans.push_back(temp);

// skip the duplicate number.
while(front < back && temp[2]==arr[front])
front++;

// decrease the back also.
while(front < back && temp[3]==arr[back])
back--;

}
//skip the j'th duplicate index.
while(j+1 < size && arr[j+1]==arr[j])
j++;

}
//skip the i'th duplicate index.
while(i+1 < size && arr[i+1]==arr[i])
i++;
}

}


return ans;
}







int main()
{
// write a four number which sum is equal to 'K';

int arr[10]={1,2,3,3,4,5,5,6,7,8};
int target = 14; // find the four number which is equal this number.
// also unique number.
vector<vector<int>>ans;
ans = solve(arr, target, 9);
for(int i=0; i<ans.size(); i++){
for(int j=0; j<ans[i].size(); j++)
cout<<ans[i][j]<<" ";
cout<<"\n";
}
	return 0;
}