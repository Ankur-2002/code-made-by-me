#include<iostream>

using namespace std;

class triangle{
public:
void print(){
    cout<<"I am a triangle";
}

};

class iso : public triangle{
public:
void print(){
cout<<"I am an isosceles triangle"<<"\nIn an isosceles triangle two sides are equal\n";
triangle ::print();
};

int main(){

iso i;
i.print();

return 0;

}
