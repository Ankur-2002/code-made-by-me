#include<iostream>
using namespace std;

int main(){
int a[50];
cout<<"enter the length of array : ";
int size;
cin>>size;

for(int i=0; i<size; i++){
cin>>a[i];
}

int item, pos , i;
cin>>item;

	if(item <=a[0]){
	//pos =0 ;
	i=0;
  	//cout<<pos;
	}

else
	for(int i=1; i<size; i++){
	if(item < a[i]){
	//cout<<i;
	break;
	}
	}

    for(int k=size ; k>i ; k--){
        a[k+1] = a[k];
    }
    a[i]=item;


for(int i=0; i<size+1; i++){
    cout<<a[i]<<" ";
}

}
