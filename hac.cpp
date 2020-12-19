#include<iostream>
#include<vector>

using namespace std;

int main(){

int a=0,o=0;
int s,t,m,n,num1,num2;


  
cin>>s>>t;  //starting point of house is s , t;

cin>>m>>n;  //tress location.

cin>>num1>>num2; //no of apples and no of orange. 
int app[num1];
int org[num2];
for(int i=0 ;i<num1; i++)
    cin>>app[i];
for(int i=0; i<num2; i++)
    cin>>org[i];
for(int i=0 ;i<num1; i++)
    app[i]+=m;
for(int i=0; i<num2; i++)
    org[i]+=n;
for(int i=0; i<num1; i++)
{
    if(app[i]>=s && app[i]<=t)
        a++;
}
for(int i=0; i<num2; i++)
{
    if(org[i]>=s && org[i]<=t){
    o++;
    }
}
cout<<a<<"\n"<<o;

return 0;
}