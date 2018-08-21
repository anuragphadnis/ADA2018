#include<iostream>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int A[N];
	for(int i=0;i<N;i++)
		cin>>A[i];
	int small=A[0],smalli;
	for(int i=0;i<N;i++)
	{
		small=A[i],smalli=i;
		for(int j=i;j<N;j++)
		{
			if(A[j]<small)
			{
				small=A[j];		
				smalli=j;			
			}	
		}
		int tmp=A[i];
		A[i]=A[smalli];
		A[smalli]=tmp;
	}
	for(int i=0;i<N;i++)	
		cout<<A[i]<<" ";

}

