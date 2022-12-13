#include<iostream>
using namespace std;
class class_name{
	private:
		int a=1;
		int b=3;//private instance variables
		void fun()//private instance method
		{
			cout<<"hai";
		}
	public:
		int c=2;//public instance variable
		void fun1()//public instance method
		{
			cout<<a;
			fun();
		}
};
int main()
{
	class_name obj;
	obj.fun1();
}
