#include<iostream>

using namespace std;



int sortt(int *arr, int , int , int);

int merge(int *arr, int first, int last){


int count = 0;
if(first < last){

int mid = (first + last) / 2;

count+=merge(arr, first, mid);
count+=merge(arr, mid+1,last);
count+=sortt(arr, first, mid, last);
}

return count;
}

int sortt(int *arr, int first, int mid, int last){
int count=0, i=first, k=first, j=mid+1, c[50];

while(i<=mid && j<=last){
if(arr[i] < arr[j]){
c[k]=arr[i];
k++;
i++;
}

else {
c[k]=arr[j];
k++;
j++;
count += mid+1-i;
//cout<<count;
}

}

while(i<=mid){
c[k]=arr[i];
k++;
i++;

}

while(j<=last){
c[k]=arr[j];
k++;
j++;
//count++;
}

for(int i=first; i<=last; i++){
arr[i]=c[i];
}

return count;
}

int main(){

int arr[]={1,2,0,3,4};

int count = merge(arr,0,4);
cout<<count;
//for(int i=0; i<5; i++){
//cout<<arr[i]<<" ";
//}

}