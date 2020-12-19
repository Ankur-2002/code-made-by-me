#include<bits/stdc++.h>

using namespace std;

int main(){

string s;
int n,l,i;

cin>>s>>n;

vector<string>v;

v.assign(n,s);

v.sort(v.begin(), v.end());

for( i=0; i<n; i++){

if(s[i]!='a')
break;

}

cout<<i-1;
}