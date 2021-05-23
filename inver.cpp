#include<bits/stdc++.h>

using namespace std;
bool yes = false;
void ssort(int start, int mid, int end, int *arr, int &count);
void merge(int start , int end , int *arr , int &count)
{
	if(start < end)
	{
		int mid = (start + end)/2;
		merge(start, mid,arr,count);
		merge(mid+1 , end , arr , count);
		ssort(start,mid,end,arr,count);
	}
}

void ssort(int start, int mid, int end, int *arr, int &count)
{
	int i=start,j=mid+1,k=start;
	int temp[1000];
	
	while(i <=mid && j<= end)
	{
		if(arr[i] <= arr[j])
		{	
			temp[k] = arr[i];
			k++;
			i++; 
		}
		else{
		
		temp[k] = ++arr[j];
		--arr[i];
		if(temp[k] >= arr[i]){
		yes = true;	
		cout << "NO\n";
		return ;	
		}
		j++,k++;
	//	count+=mid-i+1;
		}
	}
	
	while(i <= mid)
	{
			temp[k] = arr[i];
			k++;
			i++; 
	}
	while(j <= end)
	{ 
		temp[k] = arr[j];
		j++,k++;
	}
	
	for(int l=start; l<=end; l++)
	arr[l] = temp[l];
	
}
int main(){
int arr[3]= {11,1,9};
int count  = 0;
merge( 0 , 2, arr , count);
for(auto i: arr)
cout << i << " ";
cout <<"\n"<<count;
return 0;
}