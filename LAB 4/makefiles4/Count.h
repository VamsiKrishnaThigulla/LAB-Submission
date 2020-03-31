#include<bits/stdc++.h>
using namespace std;

int  ct1(int a[],int beg, int mid,int end)
{
	if(beg==mid&&mid==end)		
	{
		if(a[mid]==1)
			return(1);
		else
			return(0);
	}		
	else
		return(ct1(a,beg,(beg+mid)/2,mid)+ct1(a,mid+1,(end+mid+1)/2,end));	
}

int  ctn(int a[],int beg, int mid,int end)
{
	if(beg==mid&&mid==end)		
	{
		if(a[mid]<0)
			return(1);
		else
			return(0);
	}		
	else
		return(ctn(a,beg,(beg+mid)/2,mid)+ctn(a,mid+1,(end+mid+1)/2,end));	
}
