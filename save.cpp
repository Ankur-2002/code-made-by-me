#include<iostream>

using namespace std;

class account{

public:
char name[20];
int age;
long long int phone;

void getdata(){
cout<<"enter the name of account holder : ";
cin>>name;
cout<<"enter the AGE of account holder : ";
cin>>age;
cout<<"enter the contact number : ";
cin>>phone;
}

void putdata(){
cout<<"name : "<<name;
cout<<"\nage : "<<age;
cout<<"\nphone number : "<<phone;
}

};


class saving : public account{

protected: 
double interest;
float rate , time;
long int principle;

	void getdata(){
	account::getdata();
	
	cout<<"enter the present ammount : ";
	cin>>principle;
	cout<<"enter the rate : ";
	cin>>rate;
	cout<<"enter the time : ";
	cin>>time;
	
	interest = (principle*rate*time)/100;	
	priciple+=interest;
	}

	void putdata(){
	
	account::putdata();
	cout<<"\nyour total amount is : "<<principle;
	cout<<"\nyour interest rate is  : "<<interest;
	
	}

};

	class current : public account {
	
	protected:
	long long int cheque;
	long int amount, total=100000;
	public:
	
	void getdata(){
	account::getdata();
	cout<<"enter your check number : ";
	cin>>cheque;
	cout<<"enter your amount for withdraw :"
	cin>>amount;
	total-=amount;
	}
	
	void putdata(){
	account::putdata();
	cout<<"your total amount is : "<<total;
	}
};

int main(){

int choice;
cout<<"choose your account mode "<<"\n1. saving account "<<"\n2. current account";

switch(choice){
case 1 :	 saving save;	
	 	save.getdata();
		save.putdata();
		break;

case 2 : 	current curt;
		curt.getdata();
		curt.putdata();			
		break;
}

return 0;
}