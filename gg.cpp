#include<bits/stdc++.h>

using namespace std;

int main(){

vector<vector<int>>v;

v={{0,1,2,0},{8,4,8,6},{7,7,8,9}}; /* the answer is  : 	     1 0 3 
						             0 0 0	
							     7 0 9 
*/

vector<int>ith;
vector<int>jth;

for(int i=0; i<v.size(); i++){
for(int j=0; j<v[i].size(); j++){
if(v[i][j]==0){
ith.push_back(i);
jth.push_back(j);
}
}
}


int h=0;
while(h<ith.size()){

for(int i=0; i<v[ith[h]].size(); i++){  
v[ith[h]][i]=0;                 // put the zero in all column.     
}

for(int j=0; j<v.size(); j++){
v[j][jth[h]]=0;          // put the zero in all row. 
}

h++;
}

//print the vector !!!! 
for(int i=0; i<v.size(); i++){
for(int j=0; j<v[i].size(); j++){
cout<<v[i][j]<<" ";
}
cout<<"\n";
}

return 0;
}
