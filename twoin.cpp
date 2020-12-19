#include<iostream>
using namespace std;

void twoinone(int *x, int *y){
int z[6];
for(int i=0 ;i<6 ;i++)
{
if(i%2==0){
z[i]=x[i];
}
else {
z[i]=y[i];
}
}
for(int i=0 ;i<6 ;i++)
cout<<z[i]<<" ";
}


int main(){

int x[3],y[3];
for(int i=0; i<3; i++){
cin>>x[i];
}
for(int i=0 ;i<3 ;i++){
cin>>y[i];
}

twoinone(x,y);

}