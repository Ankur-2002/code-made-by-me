#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,x,sum=0;
    cin>>n;
    vector<int>v;

    for(int i=0; i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int sr= v.back();

    for(int i=0; i<n ; i++){
        if(sr==v[i]){
            sum++;
        }
    }
    cout<<sum;
}
