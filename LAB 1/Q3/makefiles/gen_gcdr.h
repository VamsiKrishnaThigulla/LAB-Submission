#include<math.h>

int gcd(int a,int b)
{
	if(a==0)
	{
		return abs(b);
	}
	else
		return gcd(b%a,a);
}


int gen_gcdr(int a[],int n)
{
	static int g=0,i=0;
	g=gcd(g,a[i]);
	i++;
	if(i==n)
		return g;
	return gen_gcdr(a,n);
}
