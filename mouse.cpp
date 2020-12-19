#include<bits/stdc++.h>
using namespace std;


void partion(int *arr, int first, int last){

int pivot=arr[first];
int j=last;
int k=0;
for(int i=0; i<last; i++){
if(arr[i]>pivot){
int temp=arr[j];
arr[j]=arr[i];
arr[i]=temp;
j--;
}
else{
int temp1=arr[k];
arr[k]=arr[i];
arr[i]=temp1;
k++;
}

}

}



int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n; i++){
cin>>arr[i];
}
partion(arr,0,n-1);
for(int i=0; i<n; i++){
cout<<arr[i]<<" ";
}
	
}
