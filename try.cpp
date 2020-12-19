#include<iostream>
using namespace std;

int main(){

int row,col;
cout<<"ENTER THE ODDER OF MATRIX : ";
cin>>row>>col;

int *mat = new int[row*col];

	for(int i=0; i<row; i++){
	for(int j=0 ; j<col; j++){
	cin>>mat[i*col+j];
	}
	}
/*
for(int i=0; i<row*col ; i++){
cout<<*mat<<"  ";
mat++;
}*/

	/*for(int i=0 ;i<row; i++){
	for(int j=0 ; j<col; j++){
	cout<<mat[i*col+j];
	}
	cout<<"\n";
	}
*/
	
	cout<<*(mat)+1;
delete mat;
}