#include<bits/stdc++.h>
using namespace std;

int main(){
long long int n,m;
cin>>n>>m;

long long int graph[n][n]; // no of nodes 

for(int i=0; i<n; i++){
for(int j=0; j<n; j++)
graph[i][j]=0;
}

//  no of edges 

int start,end;
while(m--){
cin>>start>>end;
graph[start][end] = 1;   // if graph is directed start--->end != end--->start
graph[end][start] = 1;   // if graph is undirected  start-->end == end--->start
}

for(int i=0; i<n; i++)
{
for(int j=0; j<n; j++) // check how many node are connect to i;

{
cout << graph[i][j] << " ";
}
cout << "\n";
}


return 0;
}
