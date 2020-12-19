#include<bits/stdc++.h>
using namespace std;
class employee
{
	protected:
		float basic;
	public:
		void getdata()
		{
			cin>>basic;
			cout<<basic;	
		}

};
class manager : public employee
{	
	public:
	basic=8;
	int a;
};

int main()
{
	manager m;
	cout<<m.basic;
	return 0;

}