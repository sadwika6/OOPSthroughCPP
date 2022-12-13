#include<iostream>
using namespace std;
class Personal{
	public:
		string name;
		Personal()
		{
			
		}
		Personal(string name)
		{
			this->name=name;
		}
		virtual void display()
		{
			cout<<name<<endl;
		}
		virtual void fun()=0;//pure virtual function
};
class Student:public Personal{
	public:
		string rollno;
		Student(string name,string rollno):Personal(name)
		{
			this->rollno=rollno;
		}
		void display()
		{
			cout<<rollno<<endl;
			Personal::display();
		}
		void fun()//if a class consists of atleast one pure virtual class it is called as an abstract class
		{
			cout<<"hai"<<endl;
		}
};
int main()
{
	Personal *obj;
	Student s1("sadwika","1216");
	obj=&s1;
	obj->display(); 
	obj->fun();
}
