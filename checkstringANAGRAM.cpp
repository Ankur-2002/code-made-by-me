#include<bits/stdc++.h>
using namespace std;



int main(){

string s,a;

/*cin>>s>>a;

sort(s.begin(), s.end());

sort(a.begin(), a.end());

for(int i=0; i<a.length(); i++){

if(a[i]!=s[i]){
cout<<"NO";
break;
}

if(i==a.length()-1){
cout<<"YES";
}

}
*/

cin>>s>>a;

map<char,int>m;

for(int i=0; i<s.length(); i++){
m[s[i]]++;
}

for(int i=0; i<s.length(); i++){

if(m[a[i]] > 0)
m[a[i]]--;

}

int l=0;
for(char i=0; i<='z'; i++){
if(m[i] > 0){
cout<<"NO";
break;
}

if(i=='z'){
cout<<"YES";
break;
}

}

}