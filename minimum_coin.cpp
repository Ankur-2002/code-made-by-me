#include<bits/stdc++.h>
using namespace std;

int main(){
int n=121;
int notes=0;

if(n >= 1000)
{
notes+=(n/1000);
n = n%1000;
}

if(n >=500)
{
notes+=n/500;
n = n%500;
}


if(n >=100)
{
notes+=n/100;
n = n%100;
}

if(n >=50)
{
notes+=n/50;
n = n%50;
}

if(n >=20)
{
notes+=n/20;
n = n%20;
}

if(n >=10)
{
notes+=n/10;
n = n%10;
}


if(n>=2)
{
notes+=n/2;
n = n%2;
}
if(n>=1)
{
notes+=n/1;
n = n%1;

}

cout<<notes<<"\n";
return 0;
}