#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll createhash(string s){
ll result=0;

for(int i=0; i<s.length(); i++)
{
result+=(s[i]*pow(2,i));
}
return result;
}

int main(){

string text = "GEEKSFORGEEKSANKURGEEKS";
string patten = "GEEKSA";
ll hash = createhash(patten);
ll patlen=0;
for(int i=0; i<patten.length(); i++)
{
patlen+=(text[i]*pow(2,i));
}
//cout << patlen << " " << hash;
for(int i=0; i<=text.length()-patten.length(); i++)
{
	
if(patlen==hash){
int j;	
for(j=0; j<patten.length(); j++)
{
 if(text[i+j] != patten[j])	
	break;
}
if(j==patten.length())
cout << i << " ";
}

patlen = ((patlen-text[i])/2)+(text[i+patten.length()]*pow(2,patten.length()-1));

}



return 0;
}