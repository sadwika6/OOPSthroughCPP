#include<iostream>
using namespace std;
class class_name{
	private:
		int a=20;
	protected:
		int b=10;
	public:
		friend void fun(class_name);//declaration
};
void fun(class_name obj)
{
	cout<<obj.a;
}
int main()
{
	class_name obj;
	fun(obj);
}
