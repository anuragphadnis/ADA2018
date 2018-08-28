#include<iostream>
using namespace std;
int bs(int A[],int N,int ele,int beg=0,int end=-1)
{
	if(end==-1)
		end=N;
	int mid=(beg+end)/2;
	if(A[mid]==ele)
		return mid;
	else if(A[mid]>ele)
		return bs(A,N,ele,beg,mid);
	else
		return bs(A,N,ele,mid+1,end);
	return -1;
}
int main()
{
	int N;
	cout<<"\nEnter value of N";
	cin>>N;
	cout<<"\nEnter N space separated integers";
	int A[N];
	for(int i=0;i<N;i++)
		cin>>A[i];
	cout<<"\nEnter element to be searched";
	int ele;
	cin>>ele;
	int a=bs(A,N,ele);
	if(a!=-1)
		cout<<"Element found at "<<a;
	else
		cout<<"Element not found";
}