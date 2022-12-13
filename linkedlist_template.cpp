#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
		Node(int val)
		{
			data=val;
			next=NULL;
		}
};
template <typename T>
class Linkedlist{
	public:
		Node *head,*temp;
		void add_at_front(T val)
		{
			Node *NN=new Node(val);
			if(head==NULL)
			{
				head=NN;
			}
			else
			{
				NN->next=head;
				head=NN;
			}
		}
		void add_at_end(T val)
		{
			Node *NN=new Node(val);
			if(head==NULL)
			{
				head=NN;
			}
			else
			{
				temp=head;
				while(temp->next!=NULL)
		    	{
			    	temp=temp->next;
				}
				temp->next=NN;
			}
		}
		void display()
		{
			temp=head;
		    while(temp!=NULL)
		    {
		    	cout<<temp->data<<" ";
		    	temp=temp->next;
			}
		} 
};
int main()
{
	Linkedlist <int>L;
	int ch;
	while(1)
	{
		cout<<"1.add at front 2.add at end 3.display 4.exit"<<endl;
		cin>>ch;
		if(ch==1)
		{
			int val;
			cin>>val;
			L.add_at_front(val);
		}
		else if(ch==2)
		{
			int val;
			cin>>val;
			L.add_at_end(val);
		}
		else if(ch==3)
		{
			L.display();
		}
		else
		{
			break;
		}
	}
}
