#include<iostream>
using namespace std;

void merge(int *a, int , int);
void sort(int *a, int , int, int);

int main(){
int n;
cin>>n;
int a[n];
for(int i=0; i<n; i++){
cin>>a[i];
}

merge(a,0,n-1);
for(int i=0; i<n; i++)
cout<<a[i]<<" ";
}


void merge(int *a, int f, int l){

if(f<l){
int mid = (f+l)/2;

merge(a, f , mid);
merge(a, mid+1, l);
sort(a, f, mid , l);

}

}


void sort(int *a, int f, int mid, int l){

int i=f; int j = mid+1; 
int c[50], k=f;

while(i<=mid && j<=l){
if(a[i] < a[j]){
c[k] = a[i];
i++;
k++;
}
else {
c[k] = a[j];
j++;
k++;
}
}

while(i <= mid){
c[k] = a[i];
k++;
i++;
}

while(j <= l){
c[k] = a[j];
k++;
j++;
}

for(int i=f ; i<k ; i++){
a[i] = c[i];
}
}
