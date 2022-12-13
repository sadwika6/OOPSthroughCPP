#include<iostream>
using namespace std;
class Student{
	public:
		int rollno;
		float per;
		string name;
		string branch;
		/*void get_data(int roll,float p,string n,string b)
		{
			rollno=roll;
			per=p;
			name=n;
			branch=b;
		}
		void put_data()
		{
			cout<<rollno<<" "<<per<<" "<<name<<" "<<branch<<" "<<endl;
		}*/
		void get_data(int,float,string,string);//function prototypes
		void put_data();
};
void Student::get_data(int roll,float p,string n,string b)
{
	rollno=roll;
	per=p;
	name=n;
	branch=b;
}
void Student::put_data()
{
	cout<<rollno<<" "<<per<<" "<<name<<" "<<branch<<" "<<endl;
}
int main()
{
	Student std1,std2;
	int rollno;
	float per;
	string name;
	string branch;
	cin>>rollno;
	cin>>per;
	cin>>name;
	cin>>branch;
	std1.get_data(rollno,per,name,branch);
	cin>>rollno;
	cin>>per;
	cin>>name;
	cin>>branch;
	std2.get_data(rollno,per,name,branch);
	std1.put_data();
	std2.put_data();
	return 0;
}
