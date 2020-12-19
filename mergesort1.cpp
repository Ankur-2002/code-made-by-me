#include<bits/stdc++.h>

using namespace std;


void sort(int * arr, int first, int last, int mid){
int c[100];

int i=first,j=mid+1,k=first;

	while(i<=mid && j<=last){
	if(arr[i] > arr[j]){
	c[k]=arr[j];
	j++;
	k++;
	}
	
	else {
	c[k]=arr[i];
	i++;
	k++;
	}

	}

	while(i<=mid){
	c[k]=arr[i];	
	k++;
	i++;
	}
		
	while(j<=last){
	c[k]=arr[j];
	j++;
	k++;
	}
	
	
	for(int i=first; i<=last; i++)
	arr[i]= c[i];
}




void merge(int * arr, int first, int last){

if(first<last){
int mid = (first+last)/2;

merge(arr, first, mid);
merge(arr,mid+1, last);
sort(arr, first, last, mid);
}

}




int main(){

int arr[5]={43,2,11,5,7};

merge(arr, 0, 4);

for(int i=0; i<5; i++)
cout<<arr[i]<<" ";

}