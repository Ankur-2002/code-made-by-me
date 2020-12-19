#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int count_broke(vector<int>v){
int max=v[0], score=0;
for(int i=1; i<v.size(); i++){
if(max < v[i]){
max=v[i];
score++;
}
}
return score;
}

int count_worst(vector<int>v){
int score=0,max=v[0], count=0;
for(int i=0; i<3; i++){
if(v[i]<v[i+1])
count++;
}
if(count==3)
return 0;

for(int i=1; i<v.size(); i++){
if(max > v[i]){
max=v[i];
score++;
}
}
return score;
}


int main(){
int n,x;
cin>>n;
vector<int>v;
for(int i=0; i<n; i++){
cin>>x;
v.push_back(x);
}

int score=count_broke(v);
int worst=count_worst(v);

cout<<score<<" "<<worst;
}