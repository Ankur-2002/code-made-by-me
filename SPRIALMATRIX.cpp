#include<bits/stdc++.h>
using namespace std;

int main(){

int arr[3][5] = {{6, 6 ,2, 28, 2 },{12, 26, 3 ,28 ,7} ,{22 ,25 ,3, 4 ,23}};


 int firstrow=0,lastrow=3-1,firstcol=0,lastcol=5-1;
        //vector<int>ans;
        
        while((firstrow<=lastrow) && (firstcol<=lastcol))
        {
            for(int i=firstrow; i<=lastcol; i++)
		cout<<arr[firstrow][i]<<" ";
            //ans.push_back(m[firstrow][i]);
            cout<<"bs!";
            for(int j=firstrow+1; j<=lastrow; j++)
		cout<<arr[j][lastcol]<<" ";           
// ans.push_back(m[j][lastcol]);
            cout<<"bs!";
            
		if(firstrow!=lastrow)
            for(int k=lastcol-1; k>firstcol; k--)
        	cout<<arr[lastrow][k]<<" ";    
	//ans.push_back(m[lastrow][k]);
            cout<<"bs!";
            for(int l=lastrow; l>=firstrow+1; l--)
        	cout<<arr[l][firstcol]<<" ";    
	//ans.push_back(m[l][firstcol]);
            cout<<"katam!";
            firstrow++;
            lastrow--;
            firstcol++;
            lastcol--;
     cout<<"\n";
        }



}