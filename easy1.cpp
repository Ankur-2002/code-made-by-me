#include<iostream>
#include<vector>

using namespace std;

void sort(vector<int>v, int , int , int );

void merge(vector<int>v ,int first, int last){

if(first<=last){
    int mid=(first+last)/2;
    
    merge(v,first,mid);
    merge(v,mid+1,last);
    sort(v,first,mid,last);

	}

}

void sort(vector<int>v,int first,int mid,int last){
    int i=first,j=mid+1;
    vector<int>c;

    while(i<=mid && j<=last){
        if(v[i]<v[j]){
            c.push_back(v[i]);
            i++;
        }
        else {
        c.push_back(v[j]);
        j++;
         }
    }
    while(i<=mid){
        c.push_back(v[i]);
        i++;
    }

    while(j<=last){
        c.push_back(v[j]);
        j++;
    }

    for(int i=first; i<c.size(); i++){
        v[i]=c[i];
    }

}


int main(){
int n,x;
cin>>n;
vector<int>v;
for(int i=0; i<n; i++){
    cin>>x;
    v.push_back(x);
}
int first=0,last=n-1;

merge(v, first , last);

for(int i=0; i<n; i++){
    cout<<v[i]<<" ";
}
return 0;
}