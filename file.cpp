#include<fstream>
#include<iostream>
using namespace std;


int main(){

ifstream obj("ankur.txt", ios::in);
//char a[120];

char c[104];

obj.read((char*)&c, sizeof(c));

cout<<c;
return 0;
	
}