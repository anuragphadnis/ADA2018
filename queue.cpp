#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
}*f,*r;
void insert(int ele)
{
	node *np=new node;
	if(np==NULL)
	{
		cout<<"\nQueue Overflow";
		return;
	}
	if(r==NULL)
	{
		np->data=ele;
		np->next=NULL;
		f=r=np;	
		return;	
	}
	
	np->data=ele;
	np->next=NULL;
	r->next=np;
	r=np;
}
void pop()
{
	if(f==NULL)
	{	
		cout<<"Queue Underflow";
		return;
	}
	if(f==r)
	{
		node *tmp=f;
		delete tmp;
	f=r=NULL;	
	}
	node *tmp = f;
	f=f->next;
	delete tmp;
}
void display()
{
	if(f==NULL)
		cout<<"\nEmpty";
	node *tmp = new node;
	tmp=f;
	cout<<endl;	
	while(tmp!=NULL)
	{
		cout<<tmp->data<<" ";	
		tmp=tmp->next;	
	}
}
int main()
{	
	int c=0;
	while(c!=-1)
	{
		cout<<"\nEnter chouce 1.Push \n2.Pop\n3. Display";
		cin>>c;
		if(c==1)
		{
			int ele;
			cin>>ele;
			insert(ele);
		}		
		if(c==2)
			pop();
		if(c==3)
			display();		
	}
}
