#include<bits/stdc++.h>
using namespace std;


int main(){


int n;
cin>>n;
long long int sum=0;
long long int neg=0;


while(n--){
int a;
cin>>a;

sum+=(a);
neg+=(a*a);

}


cout<<((sum*sum)-neg)/2;


}