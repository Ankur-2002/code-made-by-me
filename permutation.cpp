#include<bits/stdc++.h>
using namespace std;


void per(int l,vector<int>&arr){

if(l==arr.size())
{
for(int i=0; i<arr.size(); i++)
cout << arr[i]<< " "; 
cout << "\n";
return ;

}

for(int i=l; i<arr.size(); i++)
{
swap(arr[i], arr[l]);
per(l+1, arr);
swap(arr[i],arr[l]);
}

}



int main(){
vector<int>arr={1,2,3,4,5,6,7,8,8,9,9};
int l=0;

per(0,arr);
return 0;
}