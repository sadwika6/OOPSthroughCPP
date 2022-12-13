/*#include<iostream>
using namespace std;
class A{
	public:
		void create(){
			B obj2(1,2);
			obj2.display();//accessing private class using public class
		}
	private:
		class B{
			public:
				int a,b;
				B(int a,int b)
				{
					this->a=a;
					this->b=b;
				}
				void display()
				{
					cout<<this->a<<" "<<this->b;
				}
		};
};
int main()
{
	A obj;
	obj.create();
}*/
#include<iostream>
using namespace std;
class A{
	public:
		friend class C;
	private:
		class B{
			public:
				int a,b;
				B(int a,int b)
				{
					this->a=a;
					this->b=b;
				}
				void display()
				{
					cout<<this->a<<" "<<this->b;
				}
		};
};
class C{
	public:
		C()
		{
			A::B obj1(1,2);
			obj1.display();
		}
};
int main()
{
	A obj;
	C obj2;
}
