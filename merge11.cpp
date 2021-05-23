#include<bits/stdc++.h>
using namespace std;

void sortmerge(int *arr, int , int , int);

void merge(int *arr, int first , int last)
{
	if(first < last)
	{
		int mid = (first + last)/2;
		merge(arr, first, mid);
		merge(arr ,mid+1, last);
		sortmerge(arr, first , mid , last);
	}
}


void sortmerge(int * arr , int first , int mid, int last){

int i = first , j = mid+1, k = first; 
int temp[100];

	while(i<= mid && j<=last)
	{
		 if(arr[i] < arr[j])
		{
			temp[k++] = arr[i++];
		}
		else
		temp[k++] = arr[j++];
	}

	while(i<=mid)
	{
		temp[k++] = arr[i++];
	}
	
	while(j<=last)
	{
		temp[k++] = arr[j++];
	}

	for(int i=first; i<=last; i++)
	{
		arr[i] = temp[i];
	}
}


int main(){
	int arr[10] = {5,4,3,2,1,5,4,3,2,5};
	merge(arr,0,10-1);

	for(auto i : arr)
	cout << i << " ";
	return 0;	
}
	