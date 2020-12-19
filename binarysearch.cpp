#include<iostream>
using namespace std;

int fin(int *a, int len, int s){
int mid,first=0,last;
last=len;
while(first<=last){

mid=(first+last)/2;

if(a[mid]==s){
return mid;
break;
}
if(a[mid] > s){
last = mid-1;
}
else {
first=mid+1;
}

}

return -1;
}

int main(){

int ar[9]={0,1,1,2,3,5,8,13,21};
int len=8;// first=0;
int aa;
cin>>aa;
int res = fin(ar, len, aa);
if(res==-1){
cout<<"element not found ";
}
else{
cout<<res+1;
}
getc();
}