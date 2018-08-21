#include<iostream>
using namespace std;
int main()
{
	int N,ele;
cout<<"\nEnter size of array and element to be searched";
cin>>N>>ele;
int A[N];
cout<<"\nEnter N space separated integers";
for(int i=0;i<N;i++)
	cin>>A[i];
int flag=0;
for(int i=0;i<N;i++)
	if(ele==A[i])
		flag=1;
if(flag==1)
	cout<<"\nElement is present";
else
	cout<<"\nElement is not found";
}
