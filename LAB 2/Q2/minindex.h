#include<bits/stdc++.h>

using namespace std;

int i;

int minindex(int arr[],int size)
{
	int min=arr[0];
	for(i=1;i<size;i++)
	{	
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	for(i=0;i<size;i++)
	{
		if(min==arr[i])
		{
			int minindex=i;
			return minindex;
		}
	}
}

int minindex(double arr[],int size)
{
	double min=arr[0];
	for(i=1;i<size;i++)
	{	
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	for(i=0;i<size;i++)
	{
		if(min==arr[i])
		{
			int minindex=i;
			return minindex;
		}
	}
}
