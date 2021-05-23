#include<bits/stdc++.h>

using namespace std;

int main(){
string s1,s2;
cin >> s1 >> s2;
 
int dt[s1.size()+2][s1.size()+2];
int df[s1.size()+2][s1.size()+2];

for(int gap = 0; gap < s1.size(); gap++)
{
	for(int i=0,j=gap; j < s1.size(); i++,j++)
	{
		if(gap == 0)
		{
			if(s1[i] == s1[j]  && s1[i] == 'T')
			{dt[i][j] = 1;df[i][j]=0;}
			else 
			{dt[i][j] = 0 ; df[i][j] = 1;}
		}
		else if (gap  == 1)
		{
			if(s2[i] == '&')
			{
				dt[i][j] = (dt[i][j-1]*dt[i+1][j]);
				df[i][j] = ((df[i][j-1]*df[i+1][j]) + (dt[i][j-1]*df[i+1][j])+(df[i-1][j]*dt[i+1][j]));
			}
			else if(s2[i] == '|')
			{
				dt[i][j] = ((dt[i][j-1]*dt[i+1][j]) + (dt[i][j-1]*df[i+1][j])+(df[i][j-1]*dt[i+1][j]));
				df[i][j] = (df[i][j-1]*df[i+1][j]);
			}
			else
			{
				dt[i][j] = ((dt[i][j-1]*df[i+1][j] )+ (df[i][j-1]*dt[i+1][j]));
				df[i][j] =( (dt[i][j-1]*dt[i+1][j]) + (df[i][j-1]*df[i+1][j]));
			}	
		}
		else {
		 
			int maxT = 0;
			int maxF = 0;
			for(int k=i; k<j; k++)
			{
				if(s2[k] == '&')
				{	
					maxT += ((dt[i][k]*dt[k+1][j]));
					maxF += (((df[i][k]*df[k+1][j])+(dt[i][k]*df[k+1][j])+(df[i][k]*dt[k+1][j])));		
				}
				else if(s2[k] == '|')
				{
					maxT += (((dt[i][k]*dt[k+1][j])+(dt[i][k]*df[k+1][j])+(df[i][k]*dt[k+1][j])));
					maxF += ( df[i][k]*df[k+1][j] );
				}	
				else
				{
					maxT += (((dt[i][k]*df[k+1][j])+(df[i][k]*dt[k+1][j])));
					maxF += (((dt[i][j]*dt[k+1][j])+(df[i][k]*df[k+1][j])));	
				}		
			}		
			
			dt[i][j] = maxT;
			df[i][j] = maxF;
		}
	}

}

for(int i=0; i<s1.size(); i++)
{
	for(int j=0; j<s1.size(); j++)
	{
		cout << dt[i][j] << " ";
	}
	cout << "\n";
}

cout << dt[0][s1.size()-1];
return 0;
}