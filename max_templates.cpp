#include<iostream>
using namespace std;
template<typename T>
T maxx(T a,T b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
template<typename T,typename U>
float maxx(T a,U b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
template<typename T,typename U>
float maxx(T a,T b,U c)
{
	if(a>b and a>c){
		return a;
	}
	else if(b>c)
	{
		return b;
	}
	return c;
}
int main()
{
	int a,b;
	float c,d;
	cin>>a>>b>>c>>d;
	cout<<maxx(a,b)<<endl;
	cout<<maxx(a,c)<<endl;
	cout<<maxx(c,d)<<endl;
	cout<<maxx(a,b,c)<<endl;
}
