#include<bits/stdc++.h>
#include<math.h>
#include"binarynumberoperations.h"
using namespace std;



int main()
{
	int c;
	cout<<"Enter the number"<<endl;
	cin>>c;
	int i=0,j=0;
	stack<int> bin;
	while(c>0)
	{
		bin.push(c%2);
		c/=2;
	}
	int n=bin.size();
	int a[n];
	cout<<"Number in binary is"<<endl;
	for(i=0;i<n;i++)
	{
		if(!bin.empty())
		{
			a[i]=bin.top();
			bin.pop();
		}
		cout<<a[i]<<" ";
	}
	int binary1=0,binary2=0;
	for(i=0;i<n;i++)
	{
		binary1+=a[n-1-i]*pow(10,i);
		binary2+=a[n-1-i]*pow(10,i);
	}
	
 	cout<<"Binary product of the number is"<<endl;
    cout<<multiply(binary1,binary2);
    
	return 0;
}
