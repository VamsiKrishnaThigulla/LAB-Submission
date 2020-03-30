#include <math.h>

int gcdi(int a,int b)
{
	int temp;
	while(a!=0)
	{
		temp=a;
		a=b%a;
		b=temp;
	}
	return abs(b);
}

int gen_gcdi(int a[],int n)
{
	int g=0;
	int i=0;
	for(i=0;i<n;i++)
	{
		g=gcdi(g,a[i]);
	}
	return g;
}
