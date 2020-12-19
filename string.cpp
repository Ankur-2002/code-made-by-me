#include<bits/stdc++.h>
using namespace std;

int main(){
int count=0;
string s;
cin>>s;
string a;
cin>>a;

/*for(int i=0; i<s.length(); i++){
int k=0;
for(int j=i; j<a.length()+i; j++){
if(a[k]!=s[j]){
break;
}

if(j==((a.length()+i)-1)){
count++;
cout<<i;
}

k++;
}

}


cout<<count;
*/

int alen=0;
for(int i=0; i<s.length(); i++){
if(s[i]!=a[alen]){
alen=0;
}

else 
alen++;

if(alen==a.length()){
count++;
alen=0;
}

}

cout<<count;
}