#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

vector<long long>v;

long long answer;

v={1,3,1,2,5};

vector<long long>add_All_frequency;
int sum=0;

for(int i=0; i<v.size(); i++){

sum+=v[i];
add_All_frequency.push_back(sum);

}


for(int i=0; i<v.size(); i++){
int s = i; // pointing to ith position !

int k=1;  // check no of pair !

while(s+k < v.size()){
k++;
s+=k;
}

if(s > v.size()-1)
s-=k;

if(i==0)
answer = add_All_frequency[s];

else 
answer = max(answer,(add_All_frequency[s]-add_All_frequency[i-1]));

}

cout<<answer;
}