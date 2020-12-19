#include<bits/stdc++.h>
using namespace std;


int main(){
int arr[10] = {1,2,3,4,5,5,6,6,7,7};
map<int,int>m;

for(int i=0; i<10; i++){
m[arr[i]]++;
}

for(auto i : m){

cout<<i;

}
}