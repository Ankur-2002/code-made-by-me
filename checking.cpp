#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int n,m,from,to,a,b,c;
    cin >> n >> m >> from >> to;
    
    map<long long int,vector<pair<long long int,long long int>> >graph;
    vector<pair<long long int,long long int>>stamina(n);

    for(long long int i=0; i<m; i++)
    {
        cin >> a >> b >> c;
        graph[a].push_back({b,c});
        graph[b].push_back({a,c});
    }

    for(long long int i=0; i<n; i++)
    {
        cin >> a >> b;
        stamina[i] = {a,b};
    }
    priority_queue< pair<long long int,pair<long long int,long long int>> , vector<pair<long long int,pair<long long int,long long int>>>,    
    greater<pair<long long int,pair<long long int,long long int>>> >temp;
    bool visited[n];
    memset(visited,false,sizeof(visited));
    long long int total = 0;
    temp.push({0 ,{0,from}});

    while(!temp.empty())
    {
        pair<long long int,pair<long long int,long long int>>curr = temp.top();
        temp.pop();
        visited[curr.second.second] = true;
        if(curr.second.second == to)
        {
            cout << curr.first;
            return 0;
        }

        for(auto i : graph[curr.second.second])
        {
            if(!visited[i.first] && curr.second.first >= i.second)
            {
                temp.push({curr.first,{curr.second.first - i.second,i.first}});

            }

            else if(!visited[i.first] && i.second <= stamina[curr.second.second-1].first)
            {
temp.push({ curr.first+stamina[curr.second.second-1].second,{stamina[curr.second.second-1].first,i.first}});
            }
        }

    }
    
    cout << "-1";
    
    return 0;
}