#include <bits/stdc++.h>
using namespace std;


int temptotal = 0,cost =0;
int visited[10000];
int price[10000];
int population[10000];
map<int,vector<int>>graph;
map<int,vector<int>>edgesreverse;
int number,edges,a,b;
stack<int>temp;

void strong(int root)
{
    visited[root] = 1;
    
    for(auto i : graph[root])
    {
        if(!visited[i])
        {
            strong(i);
        }
    }
    
    temp.push(root);
}


void dfs(int root)
{    
    visited[root] = 1;
    temptotal+=population[root];  

    if(price[root] != -1)
    cost =  min(cost,price[root]);
    for(auto i : edgesreverse[root])
    {
        if(!visited[i]){ 
        dfs(i);

        }
    }

}



void reverse()
{  
    for(int i=1; i<=number; i++)
    {     
        for(auto j : graph[i]){
        edgesreverse[j].push_back(i);
        }
    }
    memset(visited,0,sizeof(visited));
    int total = 0;
    int check = 0;
   
   
    while(!temp.empty())
    {
        check = 0; 
        cost = INT_MAX;
        temptotal = 0;
        if(!visited[temp.top()])
        { 
            //cout << temp.top();
            dfs(temp.top());
            if(cost==INT_MAX)
            {
                cout << "Impossible";
               return;
            }
            else {
            check = temptotal*cost;
            total+=check;
            }
        }
        temp.pop();

    }
    cout << total << " ";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> number >> edges;
    for(int i=1; i <= number; i++)
    cin >> price[i];
    for(int i=1; i<=number; i++)
    cin >> population[i];
 
    for(int i=0; i<edges; i++)
    {
        cin >> a >> b;
        graph[a].push_back(b);
    }
    
    for(int i=1; i<=number; i++)
    if(!visited[i]){
    strong(i);
    }
    reverse();
    return 0;
}