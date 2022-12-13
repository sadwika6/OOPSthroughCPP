#include<iostream>
using namespace std;
//template <typename T>//works iff datatypes are same for all arguments
template<typename T,typename U>
U sum(T a,U b)
{
	return a+b;
}
template<typename T,typename U>//template overloading
float sum(T a,T b,U c)
{
	return a+b+c;
}
int main()
{
	int a,b;
	float c,d;
	cin>>a>>b>>c>>d;
	cout<<sum(a,c)<<endl;
	cout<<sum(b,d)<<endl;
	cout<<sum(a,b,c)<<endl;
}
