#include<iostream>
using namespace std;
class Factorial{
	public:
		long long int find_fact(long long int n)
		{
			if(n==1)
			{
				return 1;
			}
			return n*find_fact(n-1);
		}
};
int main()
{
	long long int n;
	cin>>n;
	Factorial f;
	cout<<f.find_fact(n);
}
