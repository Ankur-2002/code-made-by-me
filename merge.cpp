#include<iostream>
using namespace std;

int main(){

int a[4]={1,3,6,9};

int b[4]={2,4,6,8};

int c[8];

int i=0,j=0,k=0;

while(i < 4 && j < 4){
	if(a[i] < b[j]){
	c[k]=a[i];
	i++;
	k++;
	}
	
	else {
	c[k]=b[j];
	j++;
	k++;
	}

}
			
	while(i<4){	
	c[k]=a[i];
	i++;	
	k++;
	}

	while(j<4){
	c[k]=b[j];	
	k++;
	j++;
	}
	
	for(int i=0 ;i<8; i++){
	cout<<c[i]<<" ";
	}

}