#include<bits/stdc++.h>

using namespace std;

void insert(int * arr, int len){
int temp,j;

for(int i=1; i<len; i++){
temp = arr[i];
j=i-1;

while(j>=0 && arr[j]>temp){
arr[j+1] = arr[j];
j--;
}
arr[j+1] = temp;
}

}

int main(){
int arr[5]={2,4,6,3,1};
insert(arr, 5);

for(int i=0; i<5; i++)
cout<<arr[i]<<" ";
}