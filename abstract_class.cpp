#include<iostream>
using namespace std;
class A{
	public:
		string college;
		A(string college)
		{
			this->college=college;
		}
		virtual void display()=0;
};
class B:public A{
	public:
		int rollno;
		B(string college,int rollno):A(college)
		{
			this->rollno=rollno;
		}
		void display()
		{
			cout<<college<<" "<<rollno<<" "<<"abstraction"<<endl;
		}
};
int main()
{
	A *obj;
	B bb("jkl",8765);
	obj=&bb;
	obj->display();
}
