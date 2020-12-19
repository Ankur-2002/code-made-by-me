#include <iostream>

using namespace std;

class publication {

public :
char title[30];
float price;

void getdata(){
cout<<"enter the name of title : ";
gets(title);
cout<<"\nenter the price of book : ";
cin>>price;
}

};

class book  : public publication{

public :
    int page_count;

    void getdata(){
    publication::getdata();
    cout<<"\nenter the page : ";
    cin>>page_count;
    }
    void putdata(){
        cout<<"\n\nreport are here !! \n\n";
    cout<<"book title : "<<title;
    cout<<"\nprice : "<<price;
    cout<<"\nno of page : "<<page_count;
    }
};

class tape : public publication{

    float playing_time;

    void getdata(){
    publication::getdata();
    cout<<"\nenter the playing time ";
    }

    void putdata(){
        cout<<"report are here !! \n\n";
    cout<<"book title : "<<title;
    cout<<"\nprice : "<<price;
    cout<<"\nplaying time : "<<playing_time;
    }
};

int main()
{

    book b;
    tape t;
    b.getdata();
    b.putdata();
}
