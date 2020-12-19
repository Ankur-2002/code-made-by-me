#include <iostream>
using namespace std;

 static int count=0;

class person{
public:
    char name[20];
    int age;

   void get(){
   cout<<"\nname : ";
   cin>>name;
   cout<<"age : ";
   cin>>age;
   }
   void show(){
   cout<<"\nname :"<<name<<"\nage : "<<age;
   }

};

class student : public person{

public:
    int roll;
    float averagemarks;

    void getdata(){
    cout<<"roll no  :";
    cin>>roll;
    cout<<"average  marks : ";
    cin>>averagemarks;
    }

    void putdata(){
    cout<<"\nroll no :"<<roll<<"\naveragemarks : "<<averagemarks;
    }

};

class graduate : protected student{

    public:

    char subject[20];
    char employee;

    void getinfo(){
    get();
    getdata();
    cout<<"subject : ";
    cin>>subject;
    cout<<"your are employed or not (only press Y or N)";
    cin>>employee;
    if(employee=='Y')
        count++;
    }

    void data(){
    cout<<"\nsubject : "<<subject<<"\nemployed : "<<employee<<endl;
    }


    void showall(){
    show();
    putdata();
    data();
    }

    double marks(){
    return averagemarks;
    }

};


int main(){

graduate st[2];
int year , pos;

cout<<"welcome to Vivekanand college "<<"\n"<< "enter year : ";
cin>>year;
for(int i=0; i<2; i++){
cout<<"\n";
cout<<i+1<<" graduate details : ";
st[i].getinfo();
}

double max=0;
for(int  i=0; i<2; i++){

    if(max < st[i].marks()){
        max=st[i].marks();
        pos = i;
    }
}

cout<<"\n\n\nyour details are here !!!\n"<<"\ntopper is here ";

cout<<"\nyear : "<<year<<endl;
st[pos].showall();
cout<<"\nno of employee : "<<count<<"\n\n"<<endl;
cout<<"\nno of non-working employee - : "<<2-count<<endl;
return 0;
}
