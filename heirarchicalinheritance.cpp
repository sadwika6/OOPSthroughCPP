#include<iostream>
using namespace std;
class Personal{
	public:
		string name,phno;
		Personal(string n,string pno)
		{
			name=n;
			phno=pno;
		}
		void display()
		{
			cout<<name<<" "<<phno<<endl;
		}
};
class Employee:public Personal{
	public:
		string eid,dept;
		Employee(string n,string pno,string e,string d):Personal(n,pno)
		{
			eid=e;
			dept=d;
			name=n;
			phno=pno;
		}
		void display()
		{
			cout<<eid<<" "<<dept<<endl;
			Personal::display();
		}
};
class Student:public Personal{
	public:
		string rollno,branch;
		static string college;
		Student(string n,string pno,string roll,string b):Personal(n,pno)
		{
			rollno=roll;
			branch=b;
			name=n;
			phno=pno;
		}
		void display()
		{
			cout<<branch<<" "<<rollno<<endl;
			Personal::display();
		}
};
int main()
{
	Employee emp1("emp1","98706342","1234","CSE");
	emp1.display();
	Student std1("abcd","7098654321","5432","IT");
	std1.display();
}
