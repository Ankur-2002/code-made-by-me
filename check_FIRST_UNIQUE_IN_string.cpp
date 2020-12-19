/*#include<bits/stdc++.h>

using namespace std;

int main(){

string s;
cin>>s;

map<char,int>m;

for(int i=0; i<s.length(); i++){
m[s[i]]++;
}

for(int i=0; i<s.length(); i++){

if(m[s[i]]==1){
cout<<s[i];
break;
}

if(i==s.length()-1){
cout<<"no unique";
break;
}

}



}*/


#include <bits/stdc++.h>

using namespace std;

// Complete the happyLadybugs function below.
string happyLadybugs(string b) {
map<char,int>m;
int count=0;

for(int i=0; i<b.length(); i++){
    if(b[i]=='_'){
    count++;
    break;
    }
}

for(int i=0; i<b.length(); i++){
 m[b[i]]++;
}

if(count==1){
    for(int i=0; i<b.length(); i++){
        if(b[i]!='_'){
        if(m[b[i]] < 2){
            return "NO";
            break;
        }
        }

        if(i==)
        return "YES";
        
   	}
	
	}

else 
return "NO";

return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int g;
    cin >> g;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int g_itr = 0; g_itr < g; g_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string b;
        getline(cin, b);

        string result = happyLadybugs(b);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
