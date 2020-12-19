#include<iostream>
using namespace std;

int main(){
int b, temp;
int arr[10]={-1,2,35,16,15,5,3,96,45,32};

for(int i=1; i<10; i++){

temp = arr[i];
b=i-1;

while(b>=0 && temp < arr[b]){
arr[b+1] = arr[b];
b--;
}

arr[b+1]=temp;
}

for(int i=0; i<10 ; i++){
cout<<arr[i]<<" ";
}

}