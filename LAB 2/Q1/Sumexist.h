#include<bits/stdc++.h>
#include"BinarySearch.h"

using namespace std;

#define MAX 100

int sumexisthash(int A[],int size,int p)
{
	int diff,h[MAX];
	int i;
	for(i=0;i<size;i++)
	{
		h[A[i]]++;
	}
	for(i=0;i<size;i++)
	{
		diff=p-A[i];
		if(h[diff]>=1&&diff!=A[i])
			return 1;
		if(h[diff]==2&&diff==A[i])		
			return 1;
	}
	return 0;
}

int sumexistlin(int A[],int size,int p)
{
	int diff; //difference of p,q
	int i,j;
	for(i=0;i<size;i++)
	{
		diff=p-A[i];
		for(j=0;j<size;j++)
		{
			if(i==j)
				continue;
			else if(diff==A[j])
				return 1;
		}
	}
	return 0;
}

int sumexistbin(int A[],int size,int p)
{
	int diff, exist;
	int i;
	for(i=0;i<size;i++)
	{
		diff=p=A[i];
		exist=BinarySearch(A,0,size,diff);
	}
	return exist;
}
