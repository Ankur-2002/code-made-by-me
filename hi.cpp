#include<bits/stdc++.h>

using namespace std;

int main(){
int n,count=0;
cin>>n;

long long W, H;

while(n--){

cin>>W>>H;

long double x = (long double) W/H;
cout<<x;
if(x>=1.6 && x<=1.7)
count++;
}

cout<<count;
return 0;
}