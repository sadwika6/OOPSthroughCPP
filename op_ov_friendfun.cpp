#include<iostream>
using namespace std;
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
		void display()
		{
			cout<<hour<<" "<<min<<endl;
		}
		friend void operator++(Time &obj);
		friend Time operator+(Time &obj1,Time &obj2);
};
void operator ++(Time &obj)
{
	obj.hour++;
	obj.min++;
}
Time operator +(Time &obj1,Time &obj2)
{
	int h=0,m;
	m=obj1.min+obj2.min;
	if(m>=60)
	{
		h+=(m/60);
		m=(m%60);
	}
	h+=obj1.hour+obj2.hour;
	obj1.hour=h;
	obj1.min=m;
	return obj1;
}
int main()
{
	Time t1(7,50);
	Time t2(1,23);
	t1.display();
	t2.display();
	++t1;
	t1.display();
	t1=t1+t2;
	t1.display();
}
