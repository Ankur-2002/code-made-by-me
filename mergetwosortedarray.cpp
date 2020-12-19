#include<bits/stdc++.h>

using namespace std;

/*
int nextgap(int gap){

if(gap<=1)
return 0;

else 
return (gap/2)+(gap%2);
}


void merge(int *arr, int *arr1, int n , int m){
int i, j, gap=(m+n);
i=0,j=0;

for(gap = nextgap(gap); gap > 0; gap = nextgap(gap)){

for(i=0; (i+gap)< n; i++){
if(arr[i] > arr[i+gap]){
swap(arr[i], arr[i+gap]);
}
}

for(j = gap > n ? gap-n : 0; i<n && j<m; i++, j++){
if(arr[i]  >arr1[j]){
swap(arr[i] ,arr1[j]);
}
}

if(j < m){
for(j=0; (j+gap)< m; j++){
if(arr1[j] > arr1[j+gap])
swap(arr1[j], arr1[j+gap]);
}
}

}

}
*/


void merge(int *arr, int *arr1 ,int n, int m){
int i=0;
while(i < n){

if(arr[i] > arr1[0]){

int first = arr[i];
swap(arr[i], arr1[0]);

int j=1;
while(j < m && arr1[j] < first){
arr1[j-1]=arr1[j];
j++;
}
arr1[j-1]=first;
}
i++;
}

}





int main(){

int arr[]={4,5,6,7};
int arr1[]={1,2,3};

int n = sizeof(arr)/sizeof(int);
int m = sizeof(arr1)/sizeof(int);

merge(arr, arr1,n,m);

for(int i=0; i<n; i++)
cout<<arr[i]<<" ";
for(int i=0; i<m; i++)
cout<<arr1[i]<<" ";

return 0;
}