#include<iostream>
#include<cstring>
using namespace std;

class name{
private : 
char a[10];

public:

void get();
void operator<<(name );

};


void name :: get(){
cin>>a;
}

void name ::operator<<(name n){
cout<<n.a;

//cout<<strcat(a,n.a);
}

int main(){
name n1,n2;
n1.get();
n2.get();
//n1+n2;
cout<<n1;
return 0;
}