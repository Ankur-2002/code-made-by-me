#include<bits/stdc++.h>

using namespace std;

int main(){

int n;
cin>>n;

int row,move;
cin>>row>>move;

//char ans[row][row];

vector<string>v;

for(int i=0; i<row; i++){
string s;
cin>>s;
v.push_back(s);
}

int count=0;
for(int i=0; i<row; i++){
int flag=0;

	for(int k=0; k<row; k++){

	if(v[i][k]=='P'){
	for(int j=k; j>move; j--){
	if(v[i][j-1]=='T'){
	flag=1;
	count++;
	v[i][j-1]='P';
	}
	}
	}

	if(flag==0 && v[i][k]=='P'){

	for(int j=k; j<move; j++)
	{
	if(v[i][j+1]=='T')
	count++;
	v[i][j+1]='P';
	}

	}



	}


}

cout<<count;
}
