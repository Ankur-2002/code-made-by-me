#include<iostream>
#include<cstring>
using namespace std;

class student{

private:
int age;
char name[20];

public:

void setdata();
void show();
student operator<(student one);
};

void student::setdata(){
cout<<"name : ";
cin>>name;
cout<<"\nage :";
cin>>age;
}

void student:: show(){
cout<<"name : "<<name;
cout<<"\nage: "<<age;
}

student student :: operator<(student one){
student call;
int a = strlen(name);
int b=strlen(one.name);
if(a<b){
//call.name = one.name; 
strcpy(call.name , one.name);
call.age = one.age;
}
else{ 
//call.name = name;
strcpy(call.name , name);
call.age = age;
}

return call;
}


int main(){

student s1,s2,s3;

s1.setdata();
s2.setdata();

s3 = s1.operator<(s2);

s3.show();



}