#include<iostream>
using namespace std;

int main(){

int a[6]={5,4,3,2,1,0};
int temp,j;

for(int i=1; i<6; i++){
temp=a[i];
j=i-1;

while(temp<a[j] && j!=-1){
a[j+1]=a[j];
j--;
}
a[j+1] = temp;
}

}