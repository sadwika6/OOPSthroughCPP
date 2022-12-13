#include<iostream>
using namespace std;
//++
class Time{
	int hour,min;
	public:
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
		void operator ++(int)
		{
			hour++;
			min++;
		}
		void display()
		{
			cout<<hour<<":"<<min<<endl;
		}
};
int main()
{
	Time t1(7,50);
	Time t2(8,15);
	t1++;
	t2++;
	t1.display();
	t2.display();
}
