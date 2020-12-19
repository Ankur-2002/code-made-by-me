#include<iostream>
using namespace std;

int main(){
int t,j;
int a[5]={1,24,12,32,5};
/*	for(int i=0 ;i<5; i++){
	
	for(j=0; j<4 ;j++){
		
	if(a[j]>a[j+1]){
	
	t=a[j+1];
	
	a[j+1]=a[j];
	
	}

	}
	
	}
cout<<"\n";
a[j]=t;

	}*/

for(int i=0; i<5; i++){

for(int j=0; j<5-1; j++){

if(a[j] > a[j+1])
swap(a[j], a[j+1]);

}

}
for(int i=0 ;i<5 ;i++){
	cout<<a[i]<<" ";
}
}