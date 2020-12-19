#include<iostream>
using namespace std;

void sort(int *a){
for(int i=0; i<10; i++){
for(int j=i+1; j<10; j++){
if(a[i]<a[j]){
int k=a[j];

a[j]=a[i];
a[i]=k;
}

}


}


}


int main(){
int a[10];

for(int i=0; i<10; i++){
cin>>a[i];
}
sort(a);
for(int i=0; i<10; i++){
cout<<a[i]<<"  ";
}
}