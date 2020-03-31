#include<math.h>

int gc;
int gcd_brute(int a, int b)
{
	static int i=1;
	if(b==0)
		return a;
	if(a%i==0 && b%i==0)
	{
		gc=i;
	}
	if(i<=abs(b))
	{
		i++;
		return gcd_brute(a,b);
	}
	else
		return abs(gc);
}

int gcdi_brute(int a, int b)
{
	int gc,i;
	if(a==b||b==0)
	{
		return abs(a);
	}
	if(a==0)
	{
		return abs(b);
	}
	if(a<b)
	{
		for(i=1;i<=abs(a);i++)
		{
			if(a%i==0 && b%i==0)
			{
				gc=i;
			}
		}
	}
	if(a>b)
	{
		for(i=1;i<=abs(b);i++)
		{
			if(a%i==0 && b%i==0)
			{
				gc=i;
			}
		}
	}
	return abs(gc);
}
