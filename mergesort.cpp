#include<iostream>

using namespace std;

void sort(int *arr, int , int , int);


void merge(int *arr, int first, int last){
if(first<last){
int mid = (first+last)/2;
merge(arr,first,mid);
merge(arr, mid+1,last);
sort(arr, first, mid, last);
}
}

void sort(int *arr, int first, int mid, int last){
int i=first,j=mid+1,k=first;
int c[100];
while(i<=mid && j<=last){
if(arr[i]<arr[j]){
c[k]=arr[i];
k++;
i++;
}

else {
c[k]=arr[j];
j++;
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

for(int i=first; i<=last; i++){
arr[i]=c[i];
}

}

int main(){

int arr[5]={5,4,3,2,1};

merge(arr, 0,4);

for(int i=0; i<5; i++){
cout<<arr[i]<<" ";
}
return 0;
}