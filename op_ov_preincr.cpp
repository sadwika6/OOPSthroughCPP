#include<iostream>
using namespace std;
//++
class Time{
	public:
		int hour,min;
		Time()
		{
			hour=0;
			min=0;
		}
		Time(int hh,int mm)
		{
			hour=hh;
			min=mm;
		}
		void operator ++()
		{
			++hour;
			++min;
		}
};
int main()
{
	Time t1(7,50);
	Time t2(8,15);
	++t1;
	++t2;
	cout<<t1.hour<<":"<<t1.min<<endl;
	cout<<t2.hour<<":"<<t2.min<<endl;
}
