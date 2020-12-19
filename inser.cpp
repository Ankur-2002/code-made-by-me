#include<iostream>
using namespace std;

void inserts(int *a , int , int , int);

int main(){
int arr[20];
int num;
cin>>num;

for(int i=0; i<num; i++){
cin>>arr[i];
}
int loc,n;
cin>>loc;
cin>>n;

inserts(arr,loc, num, n);

for(int i=0; i<=n+1; i++){
cout<<arr[i]<<" ";
}
}

void inserts(int *a, int loc, int num, int n){
int i;
if(loc <= num){
num--;
loc--;
for(i=num; i>=loc ; i--){
a[i+1] = a[i];
}
a[i+1]=n;
}


}