#include<bits/stdc++.h>
using namespace std;

int main(){

int arr[5] = {1,0,1,1,0};

vector<int>v;

int sum=0;

for(int i=0; i<5; i++){

if(arr[i]==1){
sum++;
}

else{
if(sum > 0){
v.push_back(sum);
sum=0;
}

v.push_back(sum);
}

}
//v.push_back(sum);

for(auto i : v)
cout<<i;

if(sum==sizeof(arr)/sizeof(int)){
cout<<sum;
}

else {
/*int count=0;
int summ=0;

for(int i=0; i<v.size(); i=i+1){

if(v[i]==0){
summ+=(1+v[i+1]);
count = max(count , summ);
//cout << count;
summ=0;
i++;
}
summ+=v[i];
}

cout<<count;
*/
}
int arra=0;

for(int i=0; i<v.size(); i+=2){
int count=v[i];

if((i+1) <= v.size()-1){
count+=(1+v[i+1]);
}

if((i+2) <= v.size()-1){
count+=v[i+2];
}

arra = max(arra , count);

}

cout<<arra;


	return 0;
}