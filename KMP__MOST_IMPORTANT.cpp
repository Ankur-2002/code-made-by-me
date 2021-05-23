#include<bits/stdc++.h>
using namespace std;

void prefixandsuffix(string pattern,int *lps)
{
	
	lps[0] = 0;
	int i=1,j=0; 
	
	while(i < pattern.length())
	{
		if(pattern[j] == pattern[i])
		{
			j++;
			lps[i] = j;
			i++;
		}
		else
		{
		if(j==0){
			lps[i]=0;
			i++;	
		}				
		else 
		j = lps[j-1];
		}		
	}
		

}

void search(string text, string pattern)
{
	int i=0,j=0;
	 int lps[pattern.length()]; 
	prefixandsuffix(pattern, lps);
	for(auto i : lps)
	cout << i << " ";
	while(i < text.length())
	{
		if(pattern[j]==text[i]){
			i++;
			j++; 

		if(j==pattern.length())
		{	
			cout<< "FOUND AT : " << i-j << " " << i << "\n";
   			j = lps[j-1];
		}
		
		}
		
			else{
 // if j==0 then no prefix so only i is increase. 					
			if(j==0)
			i++;
			else
			j = lps[j-1]; // if j!=0 then maybe before the j pattern is there.			
		}
	
	}


}


int main(){
	
	string s = "GEEKSFORGEEKS";	
	string temp = "GEEKS";
	//int lps[temp.length()];
	
	search(s,temp);
	//
		
return 0;
}