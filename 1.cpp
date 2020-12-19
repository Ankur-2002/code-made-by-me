#include <bits/stdc++.h>

using namespace std;

int squares(int a, int b) {
int sum=0;
for(int i=a; i<=b; i++){
    if(i%pow(i,0.5)==0)
	sum++;
}
return sum;
}

int main(){

int s=squares(100,1000);
cout<<s;

    return 0;
}
