#include<iostream>
using namespace std;
template <typename T>
void bubblesort(T *arr,int n)
{
	int sc=0;
	for(int x=0;x<n;x++)
	{
		sc=0;
		for(int i=0,j=i+1;i<n-x-1;i++,j++)
		{
			if(arr[i]>arr[j])
			{
				T temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				sc++;
			}
		}
		if(sc==0)
		{
			break;
		}
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	float brr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>brr[i];
	}
	bubblesort(arr,n);
	bubblesort(brr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<brr[i]<<" ";
	}
}
