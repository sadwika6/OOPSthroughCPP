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
			cout<<branch<<" "<<rollno<<" "<<college<<endl;
			Personal::display();
		}
};
string Student::college="aditya";
int main()
{
	Student std1("abcd","987654321","16","IT");
	std1.display();
}
