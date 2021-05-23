#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s,s1;
    unordered_map<char,int>mp;
    cin >> s >> s1;
    if(s.size()!=s1.size())
    {
    cout << "false";
    return 0;
    }
    for(int i=0;  i< s.size(); i++)
    {
        mp[s[i]]++;
    }   
    for(int i=0; i<s1.size(); i++)
    {
        if(mp[s1[i]]!=0)
        mp[s1[i]]--;
        else if(mp[toupper(s1[i])]!=0)
        {
 	mp[s1[i]]--;

        }
        else if(mp[tolower(s1[i])]!=0)
        {
        //    mp[tolower(s1[i])]++;
	mp[s1[i]]--;        

	} 
        else 
        mp[s1[i]]++;  
    }
    bool check = false;
    for(auto i : mp)
    {
        while(i.second > 0)
        {
            cout << i.first << " ";
            check = true;
	i.second--;	        
}
    }
    if(check == false)
    cout << "true";
    return 0;
}