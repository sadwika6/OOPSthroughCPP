#include<iostream>
using namespace std;
class Landline{
	public:
		Landline()
		{
			cout<<"calls"<<endl;
		}
};
class Mobile:public Landline{
	public:
		Mobile()
		{
			cout<<"Messages, games"<<endl;
		}
};
class SmartMobile:public Mobile{
	public:
		SmartMobile()
		{
			cout<<"Videocalls, movies";
		}
};
int main()
{
	SmartMobile Sm1;
}
