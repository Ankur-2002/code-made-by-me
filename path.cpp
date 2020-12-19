#include<bits/stdc++.h>
using namespace std;

int rec(int i , int j)
{
if(i==1 && j==2)
return 1;

if(i<=1 || j<=2)
return 0;

return rec(i , j+1)+rec(i+1 , j);

}



int main()
{

cout<<rec(i , j);

}