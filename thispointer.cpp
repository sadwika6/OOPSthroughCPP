#include<iostream>
using namespace std;
class A{
	public:
		int a,b;
		A(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		void display()
		{
			cout<<this->a<<" "<<this->b;
		}
};
int main()
{
	A obj(10,20);
	obj.display();
}
