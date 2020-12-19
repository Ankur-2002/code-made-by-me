#include<iostream>
using namespace std;

void merge(int *arr, first, last)
{
if(first<last){
int mid = (first+last)/2;

merge(arr , first ,mid);

merge(arr, mid+1, last);

sort(arr, first, mid, last);
}

}


void sort(int *arr , first , mid, last){

int i,j,k,c[20];
i=first,j=mid+1, k=first;
while(i<=mid && j<=last){
if(arr[i]< arr[j]){
c[k] = arr[i];
//k++;
i++;
}
else {
c[k] = arr[j];
//k++;
j++;
}
k++;
}

while(i<=mid){
c[k] = arr[i];
k++;
i++;
}

while(j<=last){
c[k] = arr[j];
k++;
j++;
}

for(int i=f; i<last ; i++){
arr[i] = c[i];
}

}




int main(){
int arr[10];
for(int i=0; i<10; i++){
cin>>arr[i];
}
first =0;
last =9;
merge(arr , first , last);

}