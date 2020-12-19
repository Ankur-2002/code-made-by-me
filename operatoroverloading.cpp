#include<iostream>

using namespace std;

class ages{
private:
int age;

public:
void getdata(){
cin>>age;
}

ages operator+(ages b){
ages a;
a.age = age+b.age;
return a;
}

void show(){
cout<<"age : "<<age;
}


}c1,c2,c3;

int main(){
c1.getdata();
c2.getdata();
c3=c1.operator+(c2);
c3.show();

}