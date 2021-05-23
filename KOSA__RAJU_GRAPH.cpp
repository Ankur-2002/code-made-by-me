#include<bits/stdc++.h>
using namespace std;
#define push_back pb


void dfs(int ele,vector<bool>&visited,stack<int>&temp,vector<vector<int>>graph){

visited[ele] = true;

for(auto i : graph[ele]){
	if(visited[i]==false)
	dfs(i,visted,temp,graph);
}

temp.push(ele);

}

void reverse(vector<vector<int>>&graph,vector<vector<int>>&re){
for(int i=0; i<graph.size(); i++)
{
	for(int j=0; j<graph[i].size(); j++)
	re[graph[i][j]].push_back(i);
}
}

void dfs2(vector<vector<int>>re,int ele,vector<int>visited)
{
visited[ele]=true;
cout << ele << " "; 

for(auto i : re[ele])
{
if(visited[i]==false)
dfs2(ire,i,visited);
}
}

void finSS(vector<vector<int>>graph){
vector<bool>visited(graph.size(),false);
vector<vector<int>>re(graph.size());
stack<int>temp;
for(int i=0; i<graph.size(); i++)
{
	if(visited[i]==false)
	dfs(i,visited,temp,graph);
}

reverse(graph,re);
for(int i=0; i<visited.size(); i++)
visited[i]=false;

while(!temp.empty()){

int curr = temp.top();
temp.pop();
if(visited[i]==false)
df2(re,curr,visited);

}



}

int main(){

vector<vector<int>>graph(8);

graph[0].pb(1);
graph[1].pb(2);
graph[2].pb(0);
graph[2].pb(3);
graph[3].pb(4);
graph[4].pb(5);
graph[4].pb(7);
graph[5].pb(6);
graph[6].pb(4);
graph[6].pb(7);

finSS(graph);

return 0;
}