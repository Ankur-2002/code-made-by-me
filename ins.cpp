#include<iostream>
using namespace std;

int main(){
int temp;
int arr[6];

for(int i=0; i<6; i++){
cin>>arr[i];
}

for(int i=0 ;i<6; i++){
for(int j=i+1; j<6; j++){
if(arr[i] > arr[j]){
temp=arr[j];
arr[j]=arr[i];
arr[i]=temp;
}
}
}

for(int i=0; i<6; i++){
cout<<arr[i];
}

}