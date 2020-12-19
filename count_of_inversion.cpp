#include<bits/stdc++.h>
using namespace std;


void mergesort(int *arr , int first ,int mid ,int last ,int &count)
{
int i=first , k=first , j=mid+1;
int c[1000];

while(i<=mid && j <= last)
{
if(arr[i] <= arr[j]){
c[k++] = arr[i++];
}

else{
c[k++] = arr[j++];
count +=mid+1-i;
}
}

while(i<=mid){
c[k++] = arr[i++];
}

while(j<=last){
c[k++] = arr[j++];
}

for(int l=first; l<=last; l++)
arr[l] = c[l];

}






void merge(int *arr , int first, int last , int &count)
{
//int count=0;
if(first < last)
{
int mid = (first + last)/2;
merge(arr, first , mid ,count);
merge(arr ,mid+1 ,last , count);
mergesort(arr , first , mid , last ,count);

}


}



int main(){
int arr[5]={1,2,3,0,0};
int count =0;
merge(arr , 0 , 4 , count);
cout<<count<<"\n";
for(auto i : arr)
cout<<i<<" ";
return 0;
}
