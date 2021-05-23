#include <bits/stdc++.h>
using namespace std;

 int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unordered_map<char,map<char,long long int>>mp;
    char a,b;
    long long int money,n;
    string s;
    cin >> s;
    cin >> n;
    for(long long int i=0; i<n; i++)
    {
        cin >> a >> b >> n;
        mp[a][b] = n;
    }
    long long int i=0,j=s.size()-1;
    long long int total = 0;
    while(i < j)
    {
        if(s[i]!=s[j])
        {

            if(mp[s[i]][s[j]]!=0 && mp[s[j]][s[i]]!=0)    
            total += min(mp[s[i]][s[j]] , mp[s[j]][s[i]]);
            
            else if(mp[s[i]][s[j]]!=0)
            total += mp[s[i]][s[j]];

            else 
            total += mp[s[j]][s[i]];
        }
        i++;
        j--;
    }
    cout << total << endl;
    return 0;
}