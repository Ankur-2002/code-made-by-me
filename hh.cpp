#include<iostream>
#include<cstring>
using namespace std;


class student{
private:
int age;
char name[20];

int marks[5];
public:
 	
	
	void read(){
	cout<<"age: ";
	cin>>age;
	cout<<"name: ";
	cin>>name;
	for(int i=0; i<5; i++){
	cin>>marks[i];
	}
	}
	
	void sum(){
	int s=0;
	for(int i=0; i<5; i++){
	s+=marks[i];
	}
	cout<<s;
	}
		
	void stu(student a){
	age=a.age;
	strcpy(name, a.name);
	for(int i=0; i<5; i++)
	marks[i]=a.marks[i];
	}
	void show(){
	cout<<"name: "<<name;
	cout<<"\nage: "<<age<<endl;
	for(int i=0; i<5; i++){
	cout<<i+1<<") marks : "<<marks[i]<<"\n";
	}
	}
}st,ct;

int main(){
st.read();
ct.stu(st);
ct.show();
return 0;
}