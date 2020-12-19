#include<iostream>

using namespace std;

int partition(int arr[],int ,int);


void quicksort(int arr[], int first, int last){
if(first<last){
int p=partition(arr, first ,last);
quicksort(arr,first,(p-1));
quicksort(arr,(p+1),last);
}

}

int partition(int arr[], int first, int last){

int pivot=arr[last];

int i=first;

for(int j=first; j<last; j++){

if(arr[j]<pivot){
int temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
i++;
}

}

int temp1 = arr[last];
arr[last]=arr[i];
arr[i]=temp1;

return i;
}


int main(){
int arr[7]={4,3,2,5,6,7,8};
quicksort(arr, 0, 6);
for(int i=0; i<7; i++){

cout<<arr[i]<<" ";
}
return 0;
}