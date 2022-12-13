#include<iostream>
using namespace std;
class class_name{
	public:
		static int college;
		int a=2;
		void fun()
		{
			a=100;
			college=10;
		}
		static void fun1()
		{
			college=300;
		}
};
int class_name::college=1;
int main()
{
	class_name obj1;
	class_name obj2;
	obj1.fun();
	obj1.fun1();
	cout<<obj1.college<<" "<<obj1.a<<endl;
	cout<<obj2.college<<" "<<obj2.a;
}
