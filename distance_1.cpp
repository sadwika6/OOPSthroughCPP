#include<iostream>
using namespace std;
class Distance{
	public:
		int feet,inches;
		Distance()
		{
			this->feet=0;
			this->inches=0;
		}
		Distance(int feet,int inches)
		{
			this->feet=feet;
			this->inches=inches;
		}
		void input()
		{
			cin>>feet>>inches;
		}
		void display_distance(){
			cout<<this->feet<<" "<<this->inches<<endl;
		}
		~Distance()
		{
			
		}
};
int main()
{
	int feet,inches;
	Distance d1(feet,inches);
	Distance d2(feet,inches);
	Distance res;
	d1.input();
	d2.input();
	res.feet=d1.feet+d2.feet;
	res.inches=d1.inches+d2.inches;
	if(res.inches>=12)
	{
		res.feet=res.feet+(res.inches/12);
		res.inches=res.inches%12;
	}
	d1.display_distance();
	d2.display_distance();
	res.display_distance();
}
