#include<bits/stdc++.h>
using namespace std;

int inte(int num){
int first = 0;
int last = num;
if(num <= 0)
return 0;
//int mid =0;
int x = num;
while(0 < x){
int mid = (first+last)/2;

if(mid*mid == num)
return mid;

else if(mid * mid > num)
last = mid-1;

else 
first = mid +1;

x--;
}



return 0;
}


int main(){

int x = 16;
int s= x;
x = inte(x);

if(0 < x)
cout<<x;

else 
cout<<s<<" is not a square root value !!";
}