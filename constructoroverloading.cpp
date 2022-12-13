#include<iostream>
using namespace std;
class Student{
	public:
		string name;
		int marks;
		Student()
		{
			this->name="srinu";
			this->marks=10;
		}
		Student(int marks)
		{
			this->name="ravi";
			this->marks=marks;
		}
		Student(string name,int marks)
		{
			this->name=name;
			this->marks=marks;
		}
		void display()
		{
			cout<<name<<" "<<marks<<endl;
		}
};
int main()
{
	Student s1("abc",100);
	s1.display();
	Student s2(10);
	s2.display();
	Student s3;
	s3.display();
}
