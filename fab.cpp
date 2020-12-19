#include<bits/stdc++.h>
using namespace std;
/*
int main(){

int a=0,b=1;
cout<<a<<" "<<b<<" ";
for(int i=0; i<5; i++){
a+=b;
b+=a;
cout<<a<<" "<<b<<" ";
}


		return 0;
}

*/


//IF YOU FIND FABONNACI EVEN VALUE ONLY 
//THEN THIS technique is best !!

int main(){

int a=0,b=2;
cout<<a<<" "<<b<<" ";
while(true){
int c;
c=(4*b)+a;
a=b;
b=c;

if(c>1000)
break;
cout<<c<<" ";

}


}
