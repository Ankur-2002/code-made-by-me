#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[7]={1,2,3,4,5,7,7};
int s=0;

	for(int i=0; i<7; i++)
	{
	if(arr[i] > 0){
	arr[arr[i]-1]*=-1;
	}
	
	else
	break;	
	}

	for(int i=0; i<7; i++)
	if(arr[i] > 0)
	{
	cout << i+1 ;
	break;
	}

}