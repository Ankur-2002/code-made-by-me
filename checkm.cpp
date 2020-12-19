#include<iostream>
using namespace std;


void nsort(int a[], int f, int mid, int l){

int i=f, j = mid+1, c[50], k=f;

while(i <=mid && j <= l){
if(a[i] < a[j]){
c[k]=a[i];
i++;
k++;
}

else {
c[k] = a[j];
j++;
k++;
}

}

while(i<=mid){
c[k]  = a[i]; 
i++;
k++;
}

while(j<=l){
c[k] = a[j];
k++;
j++;
}

for(int i=f; i<k ; i++){
a[i] = c[i];
}

}




void merge(int *a, int f, int l){

if(f<l){
int mid = (f+l)/2;
merge( a , f , mid);
merge(a, mid+1, l);
nsort(a, f, mid, l);
}
}








int main(){

int arr[5] = {1,4,3,2,5};

int f=0,la=4;


merge(arr, f, la);
for(int i=0; i<5 ; i++){
cout<<arr[i]<< " ";
}

}