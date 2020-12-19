#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int size;
    cin>>size;
    vector<int>vec; 
    vector<int>result; 
	

    for(int i=0;i<size;i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    int sum=0;
    for(int i=0;i<size; i++){
        sum+=vec[i];
    }
    result.assign(size ,sum);
    for(int i=0; i<size; i++){
        result[i]-=vec[i];
    }

    sort(result.begin() , result.end());
    cout<<result.front();
    cout<<" "<<result.back();

}
