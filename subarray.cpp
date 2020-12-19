#include<bits/stdc++.h>
using namespace std;

int main()
{
int arr[10]={1,2,3,4,5,6,7,8,9,10};

for(int i=0; i<10; i++)
{
int sum=arr[i];
for(int j=i+1; j<10; j++){
if(sum==k)
{
cout<<i<<" "<<j-1<<"\n";

}
sum+=arr[j];
}

}

return 0;
}