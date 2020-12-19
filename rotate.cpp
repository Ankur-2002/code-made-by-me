#include<iostream>
using namespace std;

void sort(int *arr,int first,int mid,int last,int *count);
void merge(int *arr,int first, int last, int *count);

int main(){

int arr[5]={5,4,3,2,1};
int count=0;
merge(arr,0,4,&count);
cout<<count;
return 0;
}

void merge(int *arr,int first, int last, int *count){

if(first < last){

int mid = (first+last)/2;

merge(arr,first,mid);
merge(arr,mid+1,last);
sort(arr,first,mid,last,count);

}

}


void sort(int *arr,int first,int mid,int last,int *count){

int i=first,k=first,j=mid+1,c[k];

while(i<=mid && j<=last){
if(arr[i]<arr[j]){
c[k]=arr[i];
k++;
count++;
i++;
}

else{
c[k]=arr[j];
k++;
//count++;
j++;
}

}

while(i<=mid){
c[k]=arr[i];
k++;
//count++;
i++;
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
