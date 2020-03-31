#include<math.h>

int gcdi_bin(int a,int b)
{
	int g,d=0;
	while(a%2==0 && b%2==0)
	{
		a=a/2;
		b=b/2;
		d++;
	}
	while(abs(a)!=abs(b))
	{
		if(a!=0)
			g=a;
		else
			g=b;
		if(a%2==0&&a!=0)
		{
			a=a/2;
		}
		else if(b%2==0&&b!=0)	
		{	
			b=b/2;
		}
		else if(a>b)
			a=(a-b)/2;
		else if(a<b)
			b=(b-a)/2;	
	}
	if(a!=0)
			g=a;
	return abs((g*pow(2,d)));
}

int gcd_bin(int a,int b)
{
	if(a%2==0 && b%2==0)
	{
		return (gcd_bin(a/2,b/2))*2;
	}
	if(abs(a)!=abs(b))
	{
		if(a%2==0)
		{
			if(a!=0)
				return gcd_bin(a/2,b);
			else
				return gcd_bin(b,b);
		}
		else if(b%2==0)
		{
			if(b!=0)
				return gcd_bin(a,b/2);
			else
				return gcd_bin(a,a);
		}
		else if(a>b)
			return gcd_bin((a-b)/2,b);
		else if(a<b)
			return gcd_bin((b-a)/2,a);
	}
	else
		return abs(a);
}
