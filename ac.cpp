#include<iostream>
using namespace std;

int main(){
	int a;
	cout<<"ENTER THE MATRIX ODDER : ";
	cin>>a;
	
	int *arr = new int[a];
	int *mar = new int[a];
	int *sum = new int[a];
	cout<<"enter matrix  1 :  "; 
	for(int i=0 ; i<a ;i++){
	cin>>*arr;
	arr++;
	}
	cout<<"ENTER MATRIX 2 : ";
	for(int i=0; i<a; i++){	
	cin>>*mar;
	mar++;
	//arr++;
	}
	arr-=a;
	mar-=a;
	for(int i=0 ;i<a; i++){
	*sum=*arr+*mar;
	sum++;
	arr++;
	mar++;
	}
	sum-=a;
	for(int i=0 ; i<a; i++){
	cout<<*sum<<" ";
	sum++;
	}
	delete arr, mar, sum;
	
return 0;
}