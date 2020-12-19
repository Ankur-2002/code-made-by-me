#include<iostream>
#include<vector>
using namespace std;

int main(){
int r;
int psum=0,ssum=0; 
cin>>r;l
int a[r][r];

for(int i=0 ;i<r ;i++){
for(int j=0 ;j<r; j++){
cin>>a[i][j];
}
}

for(int i=0 ;i<r; i++){

for(int j=0; j<r ;j++){

if(i==j){
psum+=a[i][j];
}

if(i+j == r-1){
ssum+=a[i][j];
}


}
}

if(ssum>psum){
cout<<ssum-psum;
}
else {
cout<<psum-ssum;
}

}