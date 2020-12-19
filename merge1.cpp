#include<iostream>
using namespace std;

int main(){
int a, b;
cin>>a>>b;
int mat[a];
int mat1[b];

for(int i=0 ;i<a; i++){
cin>>mat[i];
}

cout<<"enter the second : \n\n";

for(int i=0 ;i<b; i++){
cin>>mat1[i];
}

int finalmat[a+b];
int i=0,j=0,k=0;

while(i < a && j < b){

if(mat[i] < mat1[j]){
finalmat[k] = mat[i];
i++;
k++;
}

else {
finalmat[k] = mat1[j];
j++;
k++;
}

//k++;

}

while(i<a){
finalmat[k] = mat[i];
k++; 
i++;
}

while(j<b){
finalmat[k] = mat1[j];
k++;
j++;
}

for(int i=0 ;i<a+b ; i++){
cout<<finalmat[i]<<" ";
}

}


/*

int a[10]={1,2,4,5,6,8,94,2,4,0};

for(int i=1; i<10 ; i++){
int b=i-1;
int temp = a[i];

while(temp < a[b] && b>=0){
a[b+1] = a[b];
b--;
}

a[b+1] = temp;
}

*/
