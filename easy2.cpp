#include<iostream>
#include<vector>

using namespace std;

int count(vector<int>v){
    int count=0;
    for(int i=1; i<v.size(); i++){
    int temp=v[i];
    int b=i-1;
    while(b>=0 && temp<v[b]){
        v[b+1]=v[b];
        b--;
        count++;
    }
    v[b+1]=temp;
   
    }
    return count;
}

int main(){
int n,x;
cin>>n;
vector<int>v;
for(int i=0; i<n; i++){
    cin>>x;
    v.push_back(x);
}

int sort_count=0;
sort_count=count(v);
cout<<sort_count;
return 0;
}