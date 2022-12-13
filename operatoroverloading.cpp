#include<iostream>
using namespace std;
//+
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
		Time operator +(Time &T)
		{
			Time t3;
			t3.hour=this->hour+T.hour;
			t3.min=this->min+T.min;
			if(t3.min>60)
			{
				t3.hour+=1;
				t3.min-=60;
			}
			return t3;
		}
};
int main()
{
	Time t1(7,50);
	Time t2(8,15);
	Time t3=t1+t2;
	cout<<t3.hour<<":"<<t3.min<<endl;
}
