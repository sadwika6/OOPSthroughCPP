#include<iostream>
using namespace std;
class class_name{
	private:
		int a=20;
	protected:
		int b=10;
	public:
		friend class B;
};
class B{
	public:
		void fun(class_name obj)
		{
			cout<<obj.a<<" "<<obj.b;
		}
};
int main()
{
	class_name obj;
	B obj1;
	obj1.fun(obj);
}
