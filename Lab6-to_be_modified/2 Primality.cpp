#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	int i=0;
	int a[n];
	for(i=0;i<n;i++)
	{
		a[i]=1;
	}
	int j;
	int count=0;
	for(j=1;j*j<n;j++)
	{
		for(i=2;i<n;i++)
		{
				a[]=0;
		}
		if(a[i-1]==1)
		{
			count=1;
		}
		else
			count=0;
		for(i=0;i<n;i++)
			a[i]=1;
		if(count==0)
		{
			cout<<"Not prime"<<endl;
			break;
		}
	}
	if(count==1)
		cout<<"Number is prime"<<endl;
	return 0;
}
