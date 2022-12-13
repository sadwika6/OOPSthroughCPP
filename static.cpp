#include<iostream>
using namespace std;
class A{
	public:
		static int i;
};
int A::i=1;
int main()
{
	A obj;
	cout<<obj.i;
}
