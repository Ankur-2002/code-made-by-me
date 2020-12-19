#include<bits/stdc++.h>

using namespace std;

int main(){

int n;
cin>>n;
vector<int>v;

while(n--){
int x;
cin>>x;
v.push_back(x);
}

int q;
cin>>q;

while(q--){
int y;
cin>>y;
for(int i=0; i<v.size(); i++){

if(v[i]==y){
cout<<"Yes "<<i<<"\n";
break;
}

else if(v[i] > y ){
cout<<"No "<<i<<"\n";
break;
}

}

}

}