#include<bits/stdc++.h>

using namespace std;

string balance(string sa){

stack<char>s;

for(int i=0; i<sa.length(); i++){

if(sa[i]=='[' || sa[i]=='{' || sa[i]=='(')
s.push(s[i]);

if(sa[i]==')'){

if(s.empty())
return "NO" ;

char c = s.top();

if(c!='(')
return "NO";

else 
s.pop();
}

if(sa[i]=='}'){

if(s.empty())
return "NO" ;

char c = s.top();

if(c!='{')
return "NO";

else 
s.pop();
}

if(sa[i]==']'){

if(s.empty())
return "NO" ;

char c = s.top();

if(c!='[')
return "NO";

else 
s.pop();
}

}

if(s.empty())
return "YES";

else
return "NO";
}



int main(){
string s;
s="{}{}{}{";

string answer;

answer = balance(s);
cout<<answer;

return 0;
}