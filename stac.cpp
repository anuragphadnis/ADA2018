#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
}*top;
void push(int ele)
{
	node *np=new node;
	if(np==NULL)
	{
		cout<<"\nStack Overflow";
		return;
	}
	np->data=ele;
	np->next=top;
	top=np;
}
void pop()
{
	if(top==NULL)
	{
		cout<<"Stack Underflow";
		return;
	}
	node *tmp = top;
	top=top->next;
	delete tmp;
}
void display()
{
	if(top==NULL)
		cout<<"\nEmpty";
	node *tmp = new node;
	tmp=top;	
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
			push(ele);
		}		
		if(c==2)
			pop();
		if(c==3)
			display();		
	}
}
