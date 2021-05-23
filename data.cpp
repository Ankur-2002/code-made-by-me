#include<bits/stdc++.h>
#include<fstream>

using namespace std;

int main(){

fstream obj("ankur.txt", ios::out|ios::app|ios::binary);
char c[30];
cin.getline(c,30);

obj.write((char*)&obj, sizeof(obj));

obj.close();

return 0;
}