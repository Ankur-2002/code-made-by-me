#include <bits/stdc++.h>
using namespace std;
 
 
long long int solve(long long int n){
 
    if(n < 10)
    return n;
   long long int rem=0;
    while(n > 0)
    {   
        rem+=(n%10);
        n/=10;
    }

    return rem;
}
 
long long int cal(long long int n, vector<long long int>&arr){
    long long int sum=0;
    for(int i=0; i<arr.size(); i++)
    {
        sum+=arr[i];
        n--;
        if(n==0)
        return sum;
    }
return 0;
 
}
 
 
long long int cal2(long long int n, vector<long long int>&arr){
    long long int sum=0;
    for(int i=arr.size()-1; i>=0; i--)
    {
        sum+=arr[i];
        n--;
        if(n==0)
        return sum;
    }
 
 return 0;
}
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n,q;
    cin>>n>>q;
    vector<long long int>arr(n);
    for(long long int i=0; i<n; i++)
    {
        cin>>arr[i];
        arr[i] = solve(arr[i]);
        if(arr[i] >=10)
        arr[i] = solve(arr[i]);
        
        if(arr[i] >=10)
        arr[i] = solve(arr[i]);
    }
 sort(arr.begin(), arr.end());

 for(auto i : arr)
 cout << i << " ";
 cout << "\n";
    int ques,s;
    while(q--)
    {
        cin>>ques>>s;
        if(ques==2)
        cout << cal(s,arr) << "\n";
        else
        cout << cal2(s,arr) << "\n";
 
    }
 
    
    return 0;
}