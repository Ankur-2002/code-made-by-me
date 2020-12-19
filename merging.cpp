#include<iostream>
using namespace std;

void sort(int *, int , int, int);
void merge(int *, int , int);


int main(){
int n;
cin>>n;
int arr[n];

for(int i=0; i<n; i++){
cin>>arr[i];
}



merge(arr, 0, n);

for(int i=0; i<n; i++){
cout<<arr[i]<<" ";
}

return 0;
}



void merge(int *arr, int first,  int last){
if(first < last){
int mid = (first+last)/2;
merge(arr, first,mid);
merge(arr, mid+1, last);
sort(arr,first,mid, last);
}
}


void sort(int *arr, int first, int mid, int last){
 	int c[100];
	int k=first,i=first,j=mid+1;

	while(i<=mid && j<=last){
	if(arr[i]<arr[j]){
	c[k]=arr[i];
	k++;
	i++;
	}
	else {
	c[k]=arr[j];
	k++;
	j++;
	}
	}

	while(i<=mid){
	c[k]=arr[i];
	i++;
	k++;
	}
	
	while(j<=last){
	c[k]=arr[j];
	k++;
	j++;
	}
		
				
			for(int i=first; i<=last; i++){
			arr[i]=c[i];
			}
	
	}

