#include<iostream>
using namespace std;
template <typename U,typename T>
class Student{
	public:
		U name;
		T rollno;
		Student(string n,T roll)
		{
			name=n;
			rollno=roll;
		}
		void display()
		{
			cout<<name<<" "<<rollno<<endl;
		}	
};
int main()
{
	Student<string,int> s1("name1",123);
	Student<string,string> s2("name2","123");
	s1.display();
	s2.display();
}
