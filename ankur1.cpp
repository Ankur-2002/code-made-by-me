#include<iostream>
using namespace std;
const int n=2;
void sum(float a[][n])
{
int rsum=0, csum=0;

for(int i=0 ;i<n ; i++){
rsum=0;
for(int j=0 ;j<n ;j++){
rsum+=a[i][j];
}
cout<<"the first row sum is : "<<rsum<<endl;
}
for(int i=0; i<n ;i++){
        csum=0;
for(int j=0 ;j<n; j++){
    csum+=a[j][i];
}
cout<<"the first column sum is : "<<csum<<endl;
}
}

int main(){

float a[2][2];

for(int i=0; i<2 ; i++){
for(int j=0; j<2 ;j++){
cin>>a[i][j];
}
}

sum(a);
}
