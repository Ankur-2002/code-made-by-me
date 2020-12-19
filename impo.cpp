#include<iostream>
using namespace std;


struct employee{

int eno;
char name[20];
float salary;

void read(){
cout<<"eno : ";
cin>>eno;
cout<<"name : ";
cin>>name;
cout<<"salary :";
cin>>salary; 
}

}emp[5];

void converter(int *a){
for(int i=0;i<5 ;i++){
a[i]=emp[i].salary;
}

}

void sort_all(int *a , int size){
for(int i=0; i<5 ; i++){
for(int j=0; j<size-1 ;j++){
if(a[j]>a[j+1]){
int t=a[j+1];
a[j+1]=a[j];
a[j]=t;
}
}
size--;
}
}

int main(){

int salary[5];

for(int i=0 ; i<5 ;i++){
emp[i].read();
}

converter(salary);
sort_all(salary, 5);
for(int i=0; i<5; i++){
cout<<salary[i]<<" ";
}
}