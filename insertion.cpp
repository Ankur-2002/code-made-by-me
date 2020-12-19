#include<iostream>
using namespace std;

int main(){
int k;
int a[5]={6,7,5,3,2};

for(int i=1; i<5 ;i++){
k=i;
for(int j=i-1; j>=0; j--){
if(a[j]>a[k]){
int t=a[j];
a[j]=a[k];
a[k]=t;
k--;
}
}
}
for(int i=0 ;i<5; i++){
cout<<a[i];
}
}