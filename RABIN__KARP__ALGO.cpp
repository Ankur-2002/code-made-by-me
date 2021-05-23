#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll createhashvalue(string s){
ll result = 0;

for(int i=0; i<s.length(); i++)
result += (s[i]*pow(3 , i));

return result;

}

int main(){

string text = "GEEKSFORGEEKSGEEKS";
string pattern = "GEEKS";

if(pattern.length() > text.length())
return 0;
int j;
ll patternhash = createhashvalue(pattern);
ll texthash = 0;
for(int i=0; i<pattern.length(); i++){
texthash+=(text[i]*(ll)pow(3,i));
}


for(int i=0; i<text.length(); i++)
{

	if(texthash==patternhash)
	{
		for(j=0; j<pattern.length(); j++)
		{
			if(pattern[j]!=text[i+j])
			break;
		}		
		if(j==pattern.length())	
		cout <<" FOUND INDEX AT "<< i <<"\n"; 
	}


	if(i < text.length()-1)
	{	if(i+pattern.length() < text.length())
		texthash = ((texthash-text[i])/3)+(text[i+pattern.length()] * pow(3,pattern.length()-1));
	}
	
}

return 0;
}