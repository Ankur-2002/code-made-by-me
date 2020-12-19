#include<iostream>
using namespace std;


int partion(int *arr,int first , int last){

int pivot=arr[last];
int j=first;
for(int i=first; i<last; i++){
if(arr[i] < pivot){
int temp = arr[j];
arr[j] = arr[i];
arr[i] = temp;
j++;
}
}
int temp1=arr[j];
arr[j]=arr[last];
arr[last]=temp1;

return j;
}


void quick(int *arr,int first,int last){

if(first<last){

int p=partion(arr,first,last);
quick(arr, first, p-1);
quick(arr, p+1,last);

}

}


int main(){
int arr[5]={2,3,1,4,5};
int last =5;
quick(arr,0,last-1);
for(int i=0; i<5; i++){
cout<<arr[i]<<" ";
}
}