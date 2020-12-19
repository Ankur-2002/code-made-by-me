#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void printvalue(vector<int>v){
    for(int i=v.size()-1; i>0; i--){
        int temp=v[i];
        int b=i-1;
        if(b>=0 &&temp<v[b]){
            v[b+1] = v[b];
        }
        

        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
	cout<<"\n";
	v[b]=temp;
    }

}


int main(){

    int n,x;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++){
        cin>>x;
        v.push_back(x);
    }

    printvalue(v);
    return 0;
}