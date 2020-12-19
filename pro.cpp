#include<bits/stdc++.h>

using namespace std;

int main(){
string s;
int n;

int count=0;
int l=s.length();

for(int i=0 ; i<l; i++){
    if(s[i]=='a')
    count++;
}

if(count==0)
cout<<'0';
else if(l==1 && count==1)
cout<<n;
else if(((n*count)/l)%2!=0)
cout<<(n*count/l)+1;
else 
cout<<(n*count)/l;

return 0;
}