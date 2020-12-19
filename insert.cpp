#include<iostream>
using namespace std;


void in(int *a ,int loc,int num ,int size){
int i;
for(i=size-1 ;i>=loc; i--){
a[i+1] = a[i]; 
}
a[i+1]=num;
for(int k=0; k<size+1; k++){
cout<<a[k]<<" ";
}
}



int main(){
int n;
int arr[10];
cout<<"enter the size of array";
cin>>n;
for(int i=0 ;i<n; i++){
cin>>arr[i];
}
cout<<"\n number : ";
int num;
cin>>num;
//int size =sizeof(arr)/sizeof(int);
cout<<"\nlocation  :";
int loc;
cin>>loc;
in(arr ,loc ,num , n);



}