#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<vector<char>>v;
    vector<char>help;
    for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        char a;
        cin>>a;
        help.push_back(a);
    }
    v.push_back(help);
    help.clear();
    }

    for(int i=1; i<n-1; i++){
        for(int j=1; j<v[i].size()-1; j++){

            if((v[i][j]>v[i-1][j] && v[i][j]>v[i][j+1] )&& (v[i][j] >v[i][j-1] && v[i][j] >v[i+1][j])){
                    v[i][j]='X';

            }
        }
    }


   for(int i=0; i<n; i++){
    for(int j=0; j<v[i].size(); j++){
        cout<<v[i][j];
    }
    cout<<"\n";
    }

  return 0;
}
